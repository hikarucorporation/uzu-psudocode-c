// Function : netsend_read
// Namespace: 
// Entry    : 005821e0
// Prototype: undefined netsend_read(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined4 * param_10)
// Body     : 005821e0 - 00582319


void netsend_read(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                 undefined4 *param_10)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *in_R9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  
  uVar1 = binbuf_getnatom(param_10);
  lVar2 = binbuf_getvec((long)param_10);
  uVar13 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  if (0 < (int)uVar1) {
    uVar5 = 0;
    do {
      uVar7 = (uint)uVar5;
      if ((int)uVar7 < (int)uVar1) {
        puVar12 = (uint *)((long)(int)uVar7 * 0x10);
        puVar3 = (uint *)((long)puVar12 + lVar2);
        lVar6 = 0;
        puVar4 = puVar3;
        do {
          if ((*puVar4 & 0xfffffffe) == 4) {
            uVar8 = uVar7 - (int)lVar6;
            uVar9 = (ulong)uVar8;
            if ((int)uVar8 <= (int)uVar7) goto LAB_00582222;
            goto LAB_00582278;
          }
          lVar6 = lVar6 + -1;
          puVar4 = puVar4 + 4;
        } while ((long)(int)uVar7 - (ulong)uVar1 != lVar6);
        uVar9 = (ulong)uVar1;
        if ((int)uVar7 < (int)uVar1) {
LAB_00582278:
          uVar11 = uVar5;
          do {
            if ((*puVar3 & 0xfffffffe) == 8) {
              uVar13 = pd_error(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                param_9,"netreceive: got dollar sign in message",uVar5,8,
                                (char *)puVar12,in_R9);
              goto LAB_00582222;
            }
            puVar3 = puVar3 + 4;
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulong)uVar10;
            uVar8 = (uint)uVar9;
          } while (uVar8 != uVar10);
          if (*(int *)(lVar2 + (long)puVar12) == 1) {
            if ((int)(uVar7 + 1) < (int)uVar8) {
              outlet_list(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          *(long **)(param_9 + 0x30),0,uVar8 - uVar7,(long)puVar12 + lVar2,
                          (char *)puVar12,in_R9);
              uVar13 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
            }
            else {
              outlet_float((ulong)*(uint *)(lVar2 + 8 + (long)puVar12),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x30));
              uVar13 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
            }
          }
          else if (*(int *)(lVar2 + (long)puVar12) == 2) {
            outlet_anything(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            *(long **)(param_9 + 0x30),*(undefined8 **)(lVar2 + 8 + (long)puVar12),
                            ~uVar7 + uVar8,(int *)((long)puVar12 + lVar2 + 0x10),puVar12,in_R9);
            uVar13 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
          }
        }
      }
      else {
        uVar9 = uVar5;
      }
LAB_00582222:
      uVar7 = (int)uVar9 + 1;
      uVar5 = (ulong)uVar7;
    } while ((int)uVar7 < (int)uVar1);
  }
  return;
}


