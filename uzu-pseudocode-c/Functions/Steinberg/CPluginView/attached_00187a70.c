// Function : attached
// Namespace: Steinberg:CPluginView
// Entry    : 00187a70
// Prototype: undefined8 attached(long * param_1, long param_2)
// Body     : 00187a70 - 00187a7e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::CPluginView::attached(void*, char const*) */

undefined8 __cdecl Steinberg::CPluginView::attached(long *param_1,long param_2)

{
  param_1[5] = param_2;
  (**(code **)(*param_1 + 0x78))();
  return 0;
}


