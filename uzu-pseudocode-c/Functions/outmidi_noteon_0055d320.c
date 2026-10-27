// Function : outmidi_noteon
// Namespace: 
// Entry    : 0055d320
// Prototype: undefined outmidi_noteon(uint param_1, uint param_2, uint param_3, uint param_4)
// Body     : 0055d320 - 0055d3be


void outmidi_noteon(uint param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *(long *)(*(long *)(*plVar2 + 0x50) + 0x60);
  if ((lVar1 == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x30), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return;
  }
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  uVar3 = 0xfff;
  if (param_1 < 0xfff) {
    uVar3 = param_1;
  }
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  uVar5 = 0xf;
  if (param_2 < 0xf) {
    uVar5 = param_2;
  }
  if ((int)param_3 < 0) {
    param_3 = 0;
  }
  if (0x7e < param_3) {
    param_3 = 0x7f;
  }
  uVar4 = 0;
  if (-1 < (int)param_4) {
    uVar4 = param_4;
  }
  if (0x7e < uVar4) {
    uVar4 = 0x7f;
  }
                    /* WARNING: Could not recover jumptable at 0x0055d3b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar5 | uVar3 << 4,param_3,uVar4);
  return;
}


