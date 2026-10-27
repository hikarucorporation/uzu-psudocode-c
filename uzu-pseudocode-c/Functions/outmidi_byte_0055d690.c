// Function : outmidi_byte
// Namespace: 
// Entry    : 0055d690
// Prototype: undefined outmidi_byte(uint param_1, uint param_2)
// Body     : 0055d690 - 0055d6f6


void outmidi_byte(uint param_1,uint param_2)

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
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x60), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return;
  }
  if ((int)param_1 < 0) {
    param_1 = 0;
  }
  uVar5 = 0xfff;
  if (param_1 < 0xfff) {
    uVar5 = param_1;
  }
  uVar3 = 0;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  uVar4 = 0xff;
  if (uVar3 < 0xff) {
    uVar4 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0055d6ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar5,uVar4);
  return;
}


