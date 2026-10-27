// Function : garray_sinesum
// Namespace: 
// Entry    : 004fbf40
// Prototype: undefined garray_sinesum(undefined8 param_1, double param_2, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, long param_12, char * param_13, ulong param_14)
// Body     : 004fbf40 - 004fc01a


void garray_sinesum(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                   double param_6,double param_7,undefined8 param_8,long param_9,undefined8 param_10
                   ,int param_11,long param_12,char *param_13,ulong param_14)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  int iVar5;
  undefined4 extraout_XMM0_Db;
  
  if (param_11 < 2) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "sinesum: %s: need number of points and partial strengths",
             **(undefined8 **)(param_9 + 0x28),param_12,param_13,param_14);
    return;
  }
  fVar4 = (float)atom_getfloatarg(0,param_11,param_12);
  uVar2 = param_11 - 1;
  piVar1 = getbytes((ulong)uVar2 * 4);
  if (piVar1 == (int *)0x0) {
    return;
  }
  uVar3 = 0;
  do {
    iVar5 = atom_getfloatarg((int)uVar3,uVar2,param_12 + 0x10);
    piVar1[uVar3] = iVar5;
    uVar3 = uVar3 + 1;
  } while (uVar2 != uVar3);
  garray_dofo(CONCAT44(extraout_XMM0_Db,iVar5),param_2,param_3,param_4,param_5,param_6,param_7,
              param_8,param_9,(long)fVar4,(ulong)uVar2,piVar1,(char *)0x1,param_14);
  freebytes(piVar1);
  return;
}


