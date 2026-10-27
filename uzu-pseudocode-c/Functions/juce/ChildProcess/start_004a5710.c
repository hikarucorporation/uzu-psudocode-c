// Function : start
// Namespace: juce:ChildProcess
// Entry    : 004a5710
// Prototype: ulong start(ChildProcess * this, byte * param_1, uint param_2)
// Body     : 004a5710 - 004a59cd


/* juce::ChildProcess::start(juce::String const&, int) */

ulong __thiscall juce::ChildProcess::start(ChildProcess *this,byte *param_1,uint param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  int iVar3;
  __pid_t _Var4;
  int *piVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  char *local_58;
  char *local_50;
  char **local_48;
  undefined8 uStack_40;
  
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
                    /* try { // try from 004a572c to 004a5743 has its CatchHandler @ 004a5a2a */
  StringArray::addTokens((StringArray *)&local_68,param_1,&DAT_005e5e66,&DAT_006559ef);
  lVar7 = (long)uStack_60._4_4_;
  if (lVar7 == 0) {
    uVar9 = 0;
    goto LAB_004a58b4;
  }
                    /* try { // try from 004a574e to 004a5757 has its CatchHandler @ 004a5a28 */
  piVar5 = operator_new(0x18);
  puVar2 = local_68;
  piVar5[0] = 0;
  piVar5[1] = 0;
  piVar5[2] = -1;
  piVar5[4] = 0;
  piVar5[5] = 0;
                    /* try { // try from 004a5776 to 004a5782 has its CatchHandler @ 004a5a1b */
  juce::String::unquoted(&local_50,local_68);
  local_70 = 0;
  iVar3 = pipe((int *)&local_70);
  if (iVar3 == 0) {
    _Var4 = fork();
    if (_Var4 < 0) {
      close((int)local_70);
      close(local_70._4_4_);
    }
    else {
      if (_Var4 == 0) {
                    /* try { // try from 004a58f5 to 004a5958 has its CatchHandler @ 004a59eb */
        close((int)local_70);
        if ((param_2 & 1) == 0) {
          iVar3 = open("/dev/null",1);
        }
        else {
          iVar3 = local_70._4_4_;
        }
        dup2(iVar3,1);
        if ((param_2 & 2) == 0) {
          iVar3 = open("/dev/null",1);
        }
        else {
          iVar3 = local_70._4_4_;
        }
        dup2(iVar3,2);
        close(local_70._4_4_);
        local_48 = (char **)0x0;
        uStack_40 = 0;
        lVar6 = 0;
        do {
          local_58 = *(char **)((long)puVar2 + lVar6);
          if (*local_58 != '\0') {
            Array<char*,juce::DummyCriticalSection,0>::add
                      ((Array<char*,juce::DummyCriticalSection,0> *)&local_48,&local_58);
          }
          lVar6 = lVar6 + 8;
        } while (lVar7 * 8 != lVar6);
        local_58 = (char *)0x0;
        Array<char*,juce::DummyCriticalSection,0>::add
                  ((Array<char*,juce::DummyCriticalSection,0> *)&local_48,&local_58);
        execvp(local_50,local_48);
                    /* try { // try from 004a59c4 to 004a59cd has its CatchHandler @ 004a59ce */
                    /* WARNING: Subroutine does not return */
        _exit(-1);
      }
      *piVar5 = _Var4;
      piVar5[1] = (int)local_70;
                    /* try { // try from 004a57b9 to 004a57d9 has its CatchHandler @ 004a59eb */
      close(local_70._4_4_);
    }
  }
  piVar8 = (int *)(local_50 + -0x10);
  if (piVar8 == &emptyString) {
LAB_004a5800:
    pvVar1 = *(void **)this;
    *(int **)this = piVar5;
  }
  else {
    LOCK();
    iVar3 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar3 != 0) goto LAB_004a5800;
    operator_delete__(piVar8);
    pvVar1 = *(void **)this;
    *(int **)this = piVar5;
  }
  if (pvVar1 != (void *)0x0) {
    if (*(FILE **)((long)pvVar1 + 0x10) != (FILE *)0x0) {
      fclose(*(FILE **)((long)pvVar1 + 0x10));
    }
    if (*(int *)((long)pvVar1 + 4) != 0) {
                    /* try { // try from 004a5820 to 004a5824 has its CatchHandler @ 004a59e3 */
      close(*(int *)((long)pvVar1 + 4));
    }
    operator_delete(pvVar1);
    piVar5 = *(int **)this;
  }
  if (*piVar5 == 0) {
    *(undefined8 *)this = 0;
    if (*(FILE **)(piVar5 + 4) != (FILE *)0x0) {
      fclose(*(FILE **)(piVar5 + 4));
    }
    if (piVar5[1] != 0) {
                    /* try { // try from 004a5854 to 004a5858 has its CatchHandler @ 004a59db */
      close(piVar5[1]);
    }
    operator_delete(piVar5);
    piVar5 = *(int **)this;
  }
  uVar9 = CONCAT71((int7)((ulong)this >> 8),piVar5 != (int *)0x0);
  if (0 < uStack_60._4_4_) {
    lVar7 = 0;
    do {
      piVar5 = (int *)(local_68[lVar7] + -0x10);
      if (piVar5 != &emptyString) {
        LOCK();
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          operator_delete__(piVar5);
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_60._4_4_);
  }
LAB_004a58b4:
  uStack_60 = uStack_60 & 0xffffffff;
  free(local_68);
  return uVar9 & 0xffffffff;
}


