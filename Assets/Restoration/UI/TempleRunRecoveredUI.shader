Shader "Temple Run/Recovered UI"
{
    Properties { _MainTex ("Original texture", 2D) = "white" {} }
    SubShader
    {
        Tags { "Queue"="Transparent" "RenderType"="Transparent" "IgnoreProjector"="True" }
        Cull Off Lighting Off ZWrite Off ZTest Always
        Blend SrcAlpha OneMinusSrcAlpha
        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            #include "UnityCG.cginc"
            sampler2D _MainTex;
            float _ClipCount;
            float4 _ClipRect0, _ClipRect1, _ClipRect2, _ClipRect3;
            float4x4 _WorldToClip0, _WorldToClip1, _WorldToClip2, _WorldToClip3;
            struct Input { float4 vertex:POSITION; float2 uv:TEXCOORD0; float4 color:COLOR; };
            struct Output { float4 vertex:SV_POSITION; float2 uv:TEXCOORD0; float4 color:COLOR; float3 world:TEXCOORD1; };
            Output vert(Input v)
            {
                Output o; o.vertex=UnityObjectToClipPos(v.vertex); o.uv=v.uv; o.color=v.color;
                o.world=mul(unity_ObjectToWorld,v.vertex).xyz; return o;
            }
            void crop(float3 world, float4x4 worldToPanel, float4 rectangle)
            {
                float2 p=mul(worldToPanel,float4(world,1)).xy;
                clip(min(min(p.x-rectangle.x,rectangle.z-p.x),min(p.y-rectangle.y,rectangle.w-p.y)));
            }
            fixed4 frag(Output i):SV_Target
            {
                if (_ClipCount>0) crop(i.world,_WorldToClip0,_ClipRect0);
                if (_ClipCount>1) crop(i.world,_WorldToClip1,_ClipRect1);
                if (_ClipCount>2) crop(i.world,_WorldToClip2,_ClipRect2);
                if (_ClipCount>3) crop(i.world,_WorldToClip3,_ClipRect3);
                return tex2D(_MainTex,i.uv)*i.color;
            }
            ENDCG
        }
    }
}
