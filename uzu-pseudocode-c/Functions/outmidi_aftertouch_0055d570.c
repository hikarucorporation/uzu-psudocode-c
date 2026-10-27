// Function : outmidi_aftertouch
// Namespace: 
// Entry    : 0055d570
// Prototype: undefined outmidi_aftertouch(uint param_1, uint param_2, uint param_3)
// Body     : 0055d570 - 0055d5ea


void outmidi_aftertouch(uint param_1,uint param_2,uint param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *(long *)(*(long *)(*plVar2 + 0x50) + 0x60);
  if ((lVar1 == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x50), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return;
  }
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  uVar4 = 0xfff;
  if (param_1 < 0xfff) {
    uVar4 = param_1;
  }
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  uVar6 = 0xf;
  if (param_2 < 0xf) {
    uVar6 = param_2;
  }
  uVar3 = 0;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  uVar5 = 0x7f;
  if (uVar3 < 0x7f) {
    uVar5 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0055d5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar6 | uVar4 << 4,uVar5);
  return;
}


