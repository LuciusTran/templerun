using UnityEngine;

public partial class TempleRunFlow
{
    public GameObject WaterSurface => waterPlane;
    public int TotalGeneratedTiles => generatedCount;
    public bool TestTurnReady()
    {
        var tile = tiles[tileIndex];
        return tile.element.IsTurn() && !tile.turned && Mathf.Abs(Vector3.Dot(tile.center - Runner.transform.position, Direction(tile.incoming))) <= 7f;
    }
    public int TestTurnSign()
    {
        var tile = tiles[tileIndex];
        return tile.element.CanTurnLeft(PathElement.GetOpposite((PathElement.PathDirection)tile.incoming)) ? -1 : 1;
    }
}
