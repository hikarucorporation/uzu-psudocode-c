// Function : fudiparse_list
// Namespace: 
// Entry    : 005806e0
// Prototype: undefined fudiparse_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, int * param_12, undefined8 param_13, uint * param_14)
// Body     : 005806e0 - 005808c1


void fudiparse_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                   undefined8 param_10,int param_11,int *param_12,undefined8 param_13,uint *param_14
                   )

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  ulong uVar14;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar15;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined8 uVar16;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  
  uVar14 = (ulong)param_11;
  puVar3 = binbuf_new();
  pbVar4 = *(byte **)(param_9 + 0x38);
  fVar15 = extraout_XMM0_Da;
  uVar17 = extraout_XMM0_Db;
  if (*(ulong *)(param_9 + 0x40) < uVar14) {
    freebytes(pbVar4);
    *(ulong *)(param_9 + 0x40) = uVar14;
    pbVar4 = getbytes(uVar14);
    *(byte **)(param_9 + 0x38) = pbVar4;
    fVar15 = extraout_XMM0_Da_00;
    uVar17 = extraout_XMM0_Db_00;
  }
  if (param_11 != 0) {
    lVar10 = 0;
    do {
      fVar15 = (float)atom_getfloat(param_12);
      pbVar4[lVar10] = (byte)(int)fVar15;
      lVar10 = lVar10 + 1;
      param_12 = param_12 + 4;
    } while (param_11 != (int)lVar10);
    pbVar4 = *(byte **)(param_9 + 0x38);
    uVar17 = extraout_XMM0_Db_01;
  }
  binbuf_text(CONCAT44(uVar17,fVar15),param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar3
              ,pbVar4,uVar14);
  uVar2 = binbuf_getnatom(puVar3);
  lVar10 = binbuf_getvec((long)puVar3);
  uVar16 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_01);
  if (0 < (int)uVar2) {
    puVar7 = (uint *)0x0;
    do {
      uVar9 = (uint)puVar7;
      if ((int)uVar9 < (int)uVar2) {
        lVar5 = (long)(int)uVar9 * 0x10;
        puVar11 = (uint *)(lVar10 + lVar5);
        lVar8 = 0;
        puVar6 = puVar11;
        do {
          if ((*puVar6 & 0xfffffffe) == 4) {
            uVar1 = uVar9 - (int)lVar8;
            break;
          }
          lVar8 = lVar8 + -1;
          puVar6 = puVar6 + 4;
          uVar1 = uVar2;
        } while ((long)(int)uVar9 - (ulong)uVar2 != lVar8);
        puVar6 = (uint *)(ulong)uVar1;
        puVar13 = puVar7;
        if ((int)uVar9 < (int)uVar1) {
          do {
            if ((*puVar11 & 0xfffffffe) == 8) {
              uVar16 = pd_error(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                param_9,"fudiparse: got dollar sign in message",puVar7,8,
                                (char *)puVar7,param_14);
              goto LAB_005807b2;
            }
            uVar12 = (int)puVar13 + 1;
            puVar13 = (uint *)(ulong)uVar12;
            puVar11 = puVar11 + 4;
          } while (uVar1 != uVar12);
          if (*(int *)(lVar10 + lVar5) == 1) {
            if ((int)(uVar9 + 1) < (int)uVar1) {
              outlet_list(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          *(long **)(param_9 + 0x30),0,uVar1 - uVar9,lVar10 + lVar5,(char *)puVar7,
                          param_14);
              uVar16 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_03);
            }
            else {
              outlet_float((ulong)*(uint *)(lVar10 + 8 + lVar5),param_2,param_3,param_4,param_5,
                           param_6,param_7,param_8,*(long **)(param_9 + 0x30));
              uVar16 = CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_04);
            }
          }
          else if (*(int *)(lVar10 + lVar5) == 2) {
            outlet_anything(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            *(long **)(param_9 + 0x30),*(undefined8 **)(lVar10 + 8 + lVar5),
                            ~uVar9 + uVar1,(int *)(lVar10 + lVar5 + 0x10),puVar7,param_14);
            uVar16 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_02);
          }
        }
      }
      else {
        puVar6 = puVar7;
      }
LAB_005807b2:
      uVar9 = (int)puVar6 + 1;
      puVar7 = (uint *)(ulong)uVar9;
    } while ((int)uVar9 < (int)uVar2);
  }
  binbuf_free(puVar3);
  return;
}


