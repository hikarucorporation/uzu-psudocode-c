// Function : binbuf_addv
// Namespace: 
// Entry    : 0052fb60
// Prototype: undefined binbuf_addv(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int * param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, double param_15)
// Body     : 0052fb60 - 0052fda7


void binbuf_addv(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                int *param_9,long param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                undefined8 param_14,double param_15)

{
  char cVar1;
  char in_AL;
  void *pvVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 extraout_RDX;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined8 local_738;
  double *local_730;
  double local_718 [4];
  char *local_6f8;
  undefined8 local_6f0;
  undefined1 local_6e8 [16];
  undefined8 local_6d8;
  undefined8 local_6c8;
  undefined8 local_6b8;
  undefined8 local_6a8;
  undefined8 local_698;
  undefined8 local_688;
  undefined8 local_678;
  undefined4 local_668 [2];
  double local_660 [200];
  
  local_718[2] = (double)param_11;
  local_718[3] = (double)param_12;
  local_6f8 = param_13;
  local_6f0 = param_14;
  if (in_AL != '\0') {
    local_6e8._8_4_ = in_XMM0_Dc;
    local_6e8._0_8_ = param_1;
    local_6e8._12_4_ = in_XMM0_Dd;
    local_6d8 = param_2;
    local_6c8 = param_3;
    local_6b8 = param_4;
    local_6a8 = param_5;
    local_698 = param_6;
    local_688 = param_7;
    local_678 = param_8;
  }
  local_738 = 0x3000000010;
  local_730 = &param_15;
  pdVar3 = local_660;
  uVar5 = 0;
  do {
    cVar1 = *(char *)(param_10 + uVar5);
    if (cVar1 < 'f') {
      if (cVar1 == ',') {
        *(undefined4 *)(pdVar3 + -1) = 5;
      }
      else {
        if (cVar1 != ';') goto LAB_0052fd3e;
        *(undefined4 *)(pdVar3 + -1) = 4;
      }
      *(undefined4 *)pdVar3 = 0;
    }
    else if (cVar1 == 'f') {
      *(undefined4 *)(pdVar3 + -1) = 1;
      uVar7 = (ulong)local_738._4_4_;
      if (uVar7 < 0xa1) {
        local_738 = CONCAT44(local_738._4_4_ + 0x10,(int)local_738);
        pdVar4 = (double *)((long)local_718 + uVar7);
      }
      else {
        pdVar4 = local_730;
        local_730 = local_730 + 1;
      }
      fVar8 = (float)*pdVar4;
      param_1 = CONCAT44((int)((ulong)*pdVar4 >> 0x20),fVar8);
      *(float *)pdVar3 = fVar8;
    }
    else if (cVar1 == 's') {
      *(undefined4 *)(pdVar3 + -1) = 2;
      uVar7 = local_738 & 0xffffffff;
      if (uVar7 < 0x29) {
        local_738 = CONCAT44(local_738._4_4_,(int)local_738 + 8);
        pdVar4 = (double *)((long)local_718 + uVar7);
      }
      else {
        pdVar4 = local_730;
        local_730 = local_730 + 1;
      }
      *pdVar3 = *pdVar4;
    }
    else {
      if (cVar1 != 'i') goto LAB_0052fd3e;
      *(undefined4 *)(pdVar3 + -1) = 1;
      uVar7 = local_738 & 0xffffffff;
      if (uVar7 < 0x29) {
        local_738 = CONCAT44(local_738._4_4_,(int)local_738 + 8);
        pdVar4 = (double *)((long)local_718 + uVar7);
      }
      else {
        pdVar4 = local_730;
        local_730 = local_730 + 1;
      }
      param_1 = (ulong)(uint)(float)*(int *)pdVar4;
      *(float *)pdVar3 = (float)*(int *)pdVar4;
    }
    uVar5 = uVar5 + 1;
    pdVar3 = pdVar3 + 2;
  } while ((int)uVar5 != 100);
  uVar5 = 100;
  param_1 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                     "binbuf_addmessv: only %d allowed",100,pdVar3,param_13,param_14);
LAB_0052fd3e:
  lVar6 = (long)(int)uVar5 + (long)*param_9;
  uVar7 = (long)*param_9 * 0x10;
  pvVar2 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 2),uVar7,lVar6 * 0x10);
  if (pvVar2 == (void *)0x0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,0,"binbuf_addmessage: out of space",extraout_RDX,pdVar3,param_13,
             param_14);
  }
  else {
    *(void **)(param_9 + 2) = pvVar2;
    *param_9 = (int)lVar6;
    if ((int)uVar5 != 0) {
      memcpy((void *)((long)pvVar2 + uVar7),local_668,(uVar5 & 0xffffffff) << 4);
    }
  }
  return;
}


