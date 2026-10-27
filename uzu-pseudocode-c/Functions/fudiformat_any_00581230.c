// Function : fudiformat_any
// Namespace: 
// Entry    : 00581230
// Prototype: undefined fudiformat_any(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, ulong param_10, uint param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 00581230 - 0058135f


void fudiformat_any(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,ulong param_10,uint param_11,undefined8 *param_12,char *param_13,
                   undefined8 param_14)

{
  long lVar1;
  int *piVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar7;
  int local_44;
  undefined8 local_40;
  ulong local_38;
  void *local_30;
  
  puVar4 = param_12;
  piVar2 = binbuf_new();
  local_40._0_4_ = 2;
  local_38 = param_10;
  uVar7 = binbuf_add(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8,piVar2,1,&local_40,puVar4,param_13,param_14);
  uVar7 = binbuf_add(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar2,param_11,
                     param_12,puVar4,param_13,param_14);
  if (*(int *)(param_9 + 0x48) == 0) {
    local_40._0_4_ = 4;
    local_38 = local_38 & 0xffffffff00000000;
    uVar7 = binbuf_add(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar2,1,
                       &local_40,puVar4,param_13,param_14);
  }
  binbuf_gettext(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar2,&local_30,
                 &local_44,puVar4,param_13,param_14);
  binbuf_free(piVar2);
  if (*(ulong *)(param_9 + 0x40) < (ulong)(long)local_44) {
    freebytes(*(void **)(param_9 + 0x38));
    *(long *)(param_9 + 0x40) = (long)local_44;
    pvVar3 = getbytes((long)local_44 << 4);
    *(void **)(param_9 + 0x38) = pvVar3;
  }
  if (0 < local_44) {
    lVar5 = 8;
    lVar6 = 0;
    do {
      lVar1 = *(long *)(param_9 + 0x38);
      *(undefined4 *)(lVar1 + -8 + lVar5) = 1;
      *(float *)(lVar1 + lVar5) = (float)(int)*(char *)((long)local_30 + lVar6);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < local_44);
  }
  uVar7 = freebytes(local_30);
  outlet_list(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              *(long **)(param_9 + 0x30),0,local_44,*(undefined8 *)(param_9 + 0x38),param_13,
              param_14);
  return;
}


