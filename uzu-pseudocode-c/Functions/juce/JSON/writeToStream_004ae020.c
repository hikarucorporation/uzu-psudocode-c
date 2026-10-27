// Function : writeToStream
// Namespace: juce:JSON
// Entry    : 004ae020
// Prototype: undefined writeToStream(long * param_1, var * param_2, int * param_3)
// Body     : 004ae020 - 004ae242


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JSON::writeToStream(juce::OutputStream&, juce::var const&, juce::JSON::FormatOptions
   const&) */

void __cdecl juce::JSON::writeToStream(long *param_1,var *param_2,int *param_3)

{
  int iVar1;
  byte bVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  char *pcVar4;
  double dVar5;
  byte *local_20;
  
  pcVar4 = *(char **)param_2;
  if (pcVar4[6] != '\0') {
    (**(code **)(*param_1 + 0x30))(param_1,0x22);
    (**(code **)(*(long *)param_2 + 0x28))(&local_20,param_2 + 8);
                    /* try { // try from 004ae064 to 004ae06b has its CatchHandler @ 004ae282 */
    JSONFormatter::writeString(param_1,local_20,param_3[1]);
    local_20 = local_20 + -0x10;
    if (local_20 != (byte *)&emptyString) {
      LOCK();
      iVar1 = *(int *)local_20;
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(local_20);
      }
    }
    (**(code **)(*param_1 + 0x30))(param_1,0x22);
    return;
  }
  if (*pcVar4 == '\0') {
    if (pcVar4[1] != '\0') {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x28);
      pcVar4 = "undefined";
      bVar2 = 9;
      goto LAB_004ae112;
    }
    if (pcVar4[4] != '\0') {
                    /* try { // try from 004ae0ea to 004ae0ef has its CatchHandler @ 004ae27a */
      bVar2 = (**(code **)(pcVar4 + 0x30))(param_2 + 8);
      pcVar4 = "false";
      if (bVar2 != 0) {
        pcVar4 = "true";
      }
      bVar2 = bVar2 ^ 5;
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x28);
      goto LAB_004ae112;
    }
    if (pcVar4[5] == '\0') {
      if (pcVar4[8] != '\0') {
                    /* try { // try from 004ae1a4 to 004ae1a9 has its CatchHandler @ 004ae245 */
        plVar3 = (long *)(**(code **)(pcVar4 + 0x40))(param_2 + 8);
        JSONFormatter::writeArray(param_1,plVar3,param_3);
        return;
      }
      if (pcVar4[7] == '\0') {
        (**(code **)(pcVar4 + 0x28))(&local_20,param_2 + 8);
                    /* try { // try from 004ae207 to 004ae20e has its CatchHandler @ 004ae243 */
        operator<<(param_1,local_20);
        local_20 = local_20 + -0x10;
        if (local_20 != (byte *)&emptyString) {
          LOCK();
          iVar1 = *(int *)local_20;
          *(int *)local_20 = *(int *)local_20 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(local_20);
          }
        }
      }
      else {
        plVar3 = (long *)var::getDynamicObject(param_2);
        if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004ae1f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x18))(plVar3,param_1,param_3,*(code **)(*plVar3 + 0x18));
          return;
        }
      }
      return;
    }
                    /* try { // try from 004ae12a to 004ae12f has its CatchHandler @ 004ae272 */
    dVar5 = (double)(**(code **)(pcVar4 + 0x20))(param_2 + 8);
    if ((double)(_DAT_005d91b0 & (ulong)dVar5) != DAT_005d94e0) {
      serialiseDouble(dVar5,(juce *)&local_20,param_3[2]);
                    /* try { // try from 004ae15d to 004ae167 has its CatchHandler @ 004ae24d */
      operator<<(param_1,local_20);
      local_20 = local_20 + -0x10;
      if (local_20 == (byte *)&emptyString) {
        return;
      }
      LOCK();
      iVar1 = *(int *)local_20;
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(local_20);
        return;
      }
      return;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x28);
  pcVar4 = "null";
  bVar2 = 4;
LAB_004ae112:
                    /* WARNING: Could not recover jumptable at 0x004ae11e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,pcVar4,bVar2);
  return;
}


