// Decompiled from supplied libil2cpp.so by Ghidra; not handwritten gameplay.
// Declared C# signature: public bool get_IsPostGamePrivacyFlowActive() { }
// Ghidra address: 0138c78c; ELF VA: 0x128c78c; file offset: 0x128878c
// Address resolved from Ghidra loader source mappings; all method bytes verified against original file bytes.
// Native runtime helpers and unsupported type information may remain unresolved.


bool GameController_get_IsPostGamePrivacyFlowActive_128878c
               (GameController *self,void *runtimeMethod)

{
  if (self->_needsPrivacyFlowAfterGame != false) {
    return true;
  }
  return self->_privacyFlowInProgress != false;
}

