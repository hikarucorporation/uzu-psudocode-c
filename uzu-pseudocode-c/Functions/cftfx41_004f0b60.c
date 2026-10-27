// Function : cftfx41
// Namespace: 
// Entry    : 004f0b60
// Prototype: undefined cftfx41(int param_1, double * param_2, int param_3, long param_4)
// Body     : 004f0b60 - 004f0c5b


void cftfx41(int param_1,double *param_2,int param_3,long param_4)

{
  long lVar1;
  double dVar2;
  long lVar3;
  
  lVar3 = (long)param_3;
  lVar1 = lVar3 + -8;
  dVar2 = *(double *)(param_4 + -0x38 + lVar3 * 8);
  if (param_1 == 0x80) {
    cftf161(dVar2,*(double *)(param_4 + 0x10 + lVar1 * 8),*(double *)(param_4 + 0x18 + lVar1 * 8),
            param_2);
    cftf162(param_2 + 0x20,param_4 + lVar3 * 8 + -0x100);
    cftf161(*(double *)(param_4 + 8 + lVar1 * 8),*(double *)(param_4 + 0x10 + lVar1 * 8),
            *(double *)(param_4 + 0x18 + lVar1 * 8),param_2 + 0x40);
    cftf161(*(double *)(param_4 + 8 + lVar1 * 8),*(double *)(param_4 + 0x10 + lVar1 * 8),
            *(double *)(param_4 + 0x18 + lVar1 * 8),param_2 + 0x60);
    return;
  }
  cftf081(dVar2,param_2);
  cftf082(*(double *)(param_4 + 8 + lVar1 * 8),*(double *)(param_4 + 0x10 + lVar1 * 8),
          *(double *)(param_4 + 0x18 + lVar1 * 8),param_2 + 0x10);
  cftf081(*(double *)(param_4 + 8 + lVar1 * 8),param_2 + 0x20);
  cftf081(*(double *)(param_4 + 8 + lVar1 * 8),param_2 + 0x30);
  return;
}


