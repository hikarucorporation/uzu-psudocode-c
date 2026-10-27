// Function : setTiledImageFill
// Namespace: juce:Graphics
// Entry    : 002f60b0
// Prototype: undefined setTiledImageFill(long param_1, long * param_2)
// Body     : 002f60b0 - 002f6173


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Graphics::setTiledImageFill(juce::Image const&, int, int, float) */

void __cdecl juce::Graphics::setTiledImageFill(long param_1,long *param_2)

{
  long *plVar1;
  void *pvVar2;
  undefined4 local_48 [2];
  void *local_40;
  long *local_38;
  undefined1 local_30 [16];
  undefined8 local_20;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  plVar1 = *(long **)(param_1 + 8);
  local_48[0] = 0xff000000;
  local_40 = (void *)0x0;
  local_38 = (long *)*param_2;
  if (local_38 != (long *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  local_30 = ZEXT416(DAT_005d9038);
  local_20 = 0x3f800000;
                    /* try { // try from 002f6113 to 002f611b has its CatchHandler @ 002f6174 */
  (**(code **)(*plVar1 + 0x90))(plVar1,local_48);
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_38 + 8))();
    }
  }
  pvVar2 = local_40;
  if (local_40 != (void *)0x0) {
    *(undefined4 *)((long)local_40 + 0x24) = 0;
    free(*(void **)((long)local_40 + 0x18));
    operator_delete(pvVar2);
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x98))(DAT_005de428);
  return;
}


