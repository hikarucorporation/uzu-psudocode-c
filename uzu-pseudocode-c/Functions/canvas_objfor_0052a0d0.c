// Function : canvas_objfor
// Namespace: 
// Entry    : 0052a0d0
// Prototype: undefined canvas_objfor(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, int param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 0052a0d0 - 0052a154


void canvas_objfor(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9,long *param_10,int param_11,long param_12,char *param_13,
                  undefined8 param_14)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar3;
  float fVar4;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar5;
  
  *(undefined2 *)((long)param_10 + 0x2c) = 0;
  *(byte *)((long)param_10 + 0x2e) = *(byte *)((long)param_10 + 0x2e) & 0xfc | 1;
  lVar2 = param_12;
  puVar1 = binbuf_new();
  param_10[2] = (long)puVar1;
  fVar4 = (float)atom_getfloatarg(0,param_11,param_12);
  *(short *)(param_10 + 5) = (short)(int)fVar4;
  fVar4 = (float)atom_getfloatarg(1,param_11,param_12);
  uVar5 = CONCAT44(extraout_XMM0_Db,fVar4);
  *(short *)((long)param_10 + 0x2a) = (short)(int)fVar4;
  uVar3 = extraout_RDX;
  if (2 < param_11) {
    uVar5 = binbuf_restore(CONCAT44(extraout_XMM0_Db,fVar4),param_2,param_3,param_4,param_5,param_6,
                           param_7,param_8,(int *)param_10[2],param_11 + -2,(int *)(param_12 + 0x20)
                           ,lVar2,param_13,param_14);
    uVar3 = extraout_RDX_00;
  }
  glist_add(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,uVar3,
            lVar2,param_13,param_14);
  return;
}


