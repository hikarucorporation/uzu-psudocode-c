// Function : fromString
// Namespace: Steinberg:Vst:RangeParameter
// Entry    : 001955c0
// Prototype: ulong fromString(RangeParameter * this, long param_1, double * param_2)
// Body     : 001955c0 - 001956c0


/* Steinberg::Vst::RangeParameter::fromString(char16_t const*, double&) const */

ulong __thiscall
Steinberg::Vst::RangeParameter::fromString(RangeParameter *this,long param_1,double *param_2)

{
  short *psVar1;
  bool bVar2;
  ulong uVar3;
  undefined7 extraout_var;
  undefined8 unaff_RBP;
  double dVar4;
  double dVar5;
  long local_30;
  long local_28;
  int local_20;
  
  uVar3 = 0;
  do {
    psVar1 = (short *)(param_1 + uVar3);
    uVar3 = uVar3 + 2;
  } while (*psVar1 != 0);
  local_20 = (int)(uVar3 >> 1) + -1;
  local_28 = param_1;
  if (1 < *(int *)(this + 0x314)) {
    bVar2 = UString::scanInt((UString *)&local_28,&local_30);
    uVar3 = CONCAT71(extraout_var,bVar2) & 0xffffffff;
    if (bVar2) {
      dVar4 = (double)(**(code **)(*(long *)this + 0xb8))((double)local_30,this);
      *param_2 = dVar4;
    }
    goto LAB_001956b6;
  }
  bVar2 = UString::scanFloat((UString *)&local_28,param_2);
  if (!bVar2) {
    uVar3 = 0;
    goto LAB_001956b6;
  }
  dVar4 = *param_2;
  dVar5 = (double)(**(code **)(*(long *)this + 0xd0))(this);
  if (dVar5 <= dVar4) {
    dVar4 = *param_2;
    dVar5 = (double)(**(code **)(*(long *)this + 0xe0))(this);
    if (dVar5 < dVar4) {
      dVar4 = (double)(**(code **)(*(long *)this + 0xe0))(this);
      goto LAB_00195696;
    }
    dVar4 = *param_2;
  }
  else {
    dVar4 = (double)(**(code **)(*(long *)this + 0xd0))(this);
LAB_00195696:
    *param_2 = dVar4;
  }
  dVar4 = (double)(**(code **)(*(long *)this + 0xb8))(dVar4,this);
  *param_2 = dVar4;
  uVar3 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
LAB_001956b6:
  return uVar3 & 0xffffffff;
}


