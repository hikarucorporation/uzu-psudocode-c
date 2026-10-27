// Function : cftleaf
// Namespace: 
// Entry    : 004f06b0
// Prototype: undefined cftleaf(int param_1, int param_2, double * param_3, int param_4, long param_5)
// Body     : 004f06b0 - 004f0b57


void cftleaf(int param_1,int param_2,double *param_3,int param_4,long param_5)

{
  long lVar1;
  double *pdVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == 0x200) {
    lVar5 = (long)param_4;
    lVar3 = param_5 + lVar5 * 8 + -0x200;
    cftmdl1(0x80,param_3,lVar3);
    lVar1 = lVar5 + -8;
    cftf161(*(double *)(param_5 + -0x38 + lVar5 * 8),*(double *)(param_5 + -0x30 + lVar5 * 8),
            *(double *)(param_5 + -0x28 + lVar5 * 8),param_3);
    lVar6 = param_5 + lVar5 * 8 + -0x100;
    cftf162(param_3 + 0x20,lVar6);
    cftf161(*(double *)(param_5 + -0x38 + lVar5 * 8),*(double *)(param_5 + -0x30 + lVar5 * 8),
            *(double *)(param_5 + -0x28 + lVar5 * 8),param_3 + 0x40);
    cftf161(*(double *)(param_5 + -0x38 + lVar5 * 8),*(double *)(param_5 + -0x30 + lVar5 * 8),
            *(double *)(param_5 + -0x28 + lVar5 * 8),param_3 + 0x60);
    lVar4 = param_5 + lVar5 * 8 + -0x400;
    cftmdl2(0x80,param_3 + 0x80,lVar4);
    cftf161(*(double *)(param_5 + -0x38 + lVar5 * 8),*(double *)(param_5 + -0x30 + lVar5 * 8),
            *(double *)(param_5 + -0x28 + lVar5 * 8),param_3 + 0x80);
    cftf162(param_3 + 0xa0,lVar6);
    cftf161(*(double *)(param_5 + -0x38 + lVar5 * 8),*(double *)(param_5 + -0x30 + lVar5 * 8),
            *(double *)(param_5 + -0x28 + lVar5 * 8),param_3 + 0xc0);
    cftf162(param_3 + 0xe0,lVar6);
    cftmdl1(0x80,param_3 + 0x100,lVar3);
    cftf161(*(double *)(param_5 + -0x38 + lVar5 * 8),*(double *)(param_5 + -0x30 + lVar5 * 8),
            *(double *)(param_5 + -0x28 + lVar5 * 8),param_3 + 0x100);
    cftf162(param_3 + 0x120,lVar6);
    cftf161(*(double *)(param_5 + -0x38 + lVar5 * 8),*(double *)(param_5 + -0x30 + lVar5 * 8),
            *(double *)(param_5 + -0x28 + lVar5 * 8),param_3 + 0x140);
    cftf161(*(double *)(param_5 + -0x38 + lVar5 * 8),*(double *)(param_5 + -0x30 + lVar5 * 8),
            *(double *)(param_5 + -0x28 + lVar5 * 8),param_3 + 0x160);
    pdVar2 = param_3 + 0x180;
    if (param_2 == 0) {
      cftmdl2(0x80,pdVar2,lVar4);
      cftf162(param_3 + 0x1e0,lVar6);
    }
    else {
      cftmdl1(0x80,pdVar2,lVar3);
      cftf161(*(double *)(param_5 + 8 + lVar1 * 8),*(double *)(param_5 + 0x10 + lVar1 * 8),
              *(double *)(param_5 + 0x18 + lVar1 * 8),param_3 + 0x1e0);
    }
    cftf161(*(double *)(param_5 + 8 + lVar1 * 8),*(double *)(param_5 + 0x10 + lVar1 * 8),
            *(double *)(param_5 + 0x18 + lVar1 * 8),pdVar2);
    cftf162(param_3 + 0x1a0,lVar6);
    cftf161(*(double *)(param_5 + 8 + lVar1 * 8),*(double *)(param_5 + 0x10 + lVar1 * 8),
            *(double *)(param_5 + 0x18 + lVar1 * 8),param_3 + 0x1c0);
    return;
  }
  lVar4 = (long)param_4;
  lVar5 = param_5 + lVar4 * 8 + -0x100;
  cftmdl1(0x40,param_3,lVar5);
  lVar1 = lVar4 + -8;
  cftf081(*(double *)(param_5 + -0x38 + lVar4 * 8),param_3);
  cftf082(*(double *)(param_5 + -0x38 + lVar4 * 8),*(double *)(param_5 + -0x30 + lVar4 * 8),
          *(double *)(param_5 + -0x28 + lVar4 * 8),param_3 + 0x10);
  cftf081(*(double *)(param_5 + -0x38 + lVar4 * 8),param_3 + 0x20);
  cftf081(*(double *)(param_5 + -0x38 + lVar4 * 8),param_3 + 0x30);
  lVar3 = param_5 + lVar4 * 8 + -0x200;
  cftmdl2(0x40,param_3 + 0x40,lVar3);
  cftf081(*(double *)(param_5 + -0x38 + lVar4 * 8),param_3 + 0x40);
  cftf082(*(double *)(param_5 + -0x38 + lVar4 * 8),*(double *)(param_5 + -0x30 + lVar4 * 8),
          *(double *)(param_5 + -0x28 + lVar4 * 8),param_3 + 0x50);
  cftf081(*(double *)(param_5 + -0x38 + lVar4 * 8),param_3 + 0x60);
  cftf082(*(double *)(param_5 + -0x38 + lVar4 * 8),*(double *)(param_5 + -0x30 + lVar4 * 8),
          *(double *)(param_5 + -0x28 + lVar4 * 8),param_3 + 0x70);
  cftmdl1(0x40,param_3 + 0x80,lVar5);
  cftf081(*(double *)(param_5 + -0x38 + lVar4 * 8),param_3 + 0x80);
  cftf082(*(double *)(param_5 + -0x38 + lVar4 * 8),*(double *)(param_5 + -0x30 + lVar4 * 8),
          *(double *)(param_5 + -0x28 + lVar4 * 8),param_3 + 0x90);
  cftf081(*(double *)(param_5 + -0x38 + lVar4 * 8),param_3 + 0xa0);
  cftf081(*(double *)(param_5 + -0x38 + lVar4 * 8),param_3 + 0xb0);
  pdVar2 = param_3 + 0xc0;
  if (param_2 == 0) {
    cftmdl2(0x40,pdVar2,lVar3);
    cftf082(*(double *)(param_5 + 8 + lVar1 * 8),*(double *)(param_5 + 0x10 + lVar1 * 8),
            *(double *)(param_5 + 0x18 + lVar1 * 8),param_3 + 0xf0);
  }
  else {
    cftmdl1(0x40,pdVar2,lVar5);
    cftf081(*(double *)(param_5 + 8 + lVar1 * 8),param_3 + 0xf0);
  }
  cftf081(*(double *)(param_5 + 8 + lVar1 * 8),pdVar2);
  cftf082(*(double *)(param_5 + 8 + lVar1 * 8),*(double *)(param_5 + 0x10 + lVar1 * 8),
          *(double *)(param_5 + 0x18 + lVar1 * 8),param_3 + 0xd0);
  cftf081(*(double *)(param_5 + 8 + lVar1 * 8),param_3 + 0xe0);
  return;
}


