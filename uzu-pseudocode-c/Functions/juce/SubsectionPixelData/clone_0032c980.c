// Function : clone
// Namespace: juce:SubsectionPixelData
// Entry    : 0032c980
// Prototype: long * clone(long * param_1, long * param_2)
// Body     : 0032c980 - 0032ca92


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SubsectionPixelData::clone() */

long * __cdecl juce::SubsectionPixelData::clone(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long *local_68;
  long *local_60;
  long *local_58;
  long *plStack_50;
  undefined1 local_48;
  undefined1 local_38 [16];
  undefined8 local_28;
  
  (**(code **)(*param_2 + 0x20))(&local_60);
                    /* try { // try from 0032c9b8 to 0032c9bd has its CatchHandler @ 0032caa5 */
  (**(code **)(*local_60 + 0x10))
            (param_1,local_60,*(int *)((long)param_2 + 0xc),(int)param_2[0xc],
             *(undefined4 *)((long)param_2 + 100),*(int *)((long)param_2 + 0xc) != 1);
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
    local_58 = (long *)0x0;
    plStack_50 = (long *)0x0;
    local_48 = 0;
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
                    /* try { // try from 0032c9ce to 0032c9d8 has its CatchHandler @ 0032ca93 */
    (**(code **)(*plVar2 + 0x10))(&local_58,plVar2);
    plStack_50 = local_58;
    local_48 = 0;
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
  }
  LOCK();
  *(int *)(param_2 + 1) = (int)param_2[1] + 1;
  UNLOCK();
  local_38 = ZEXT416(DAT_005d9038);
  local_28 = 0x3f800000;
                    /* try { // try from 0032ca2f to 0032ca4b has its CatchHandler @ 0032caaa */
  local_68 = param_2;
  cVar3 = (**(code **)(*plStack_50 + 0x68))();
  if (cVar3 == '\0') {
    (**(code **)(*plStack_50 + 0xe0))(plStack_50,&local_68,local_38);
    param_2 = local_68;
    if (local_68 == (long *)0x0) goto LAB_0032ca66;
  }
  LOCK();
  plVar2 = param_2 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
LAB_0032ca66:
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 8))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 8))();
  }
  return param_1;
}


