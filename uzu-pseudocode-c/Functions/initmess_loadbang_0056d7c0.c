// Function : initmess_loadbang
// Namespace: 
// Entry    : 0056d7c0
// Prototype: undefined initmess_loadbang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9)
// Body     : 0056d7c0 - 0056d878


void initmess_loadbang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      double param_5,double param_6,double param_7,undefined8 param_8,long param_9)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint *in_R8;
  uint *in_R9;
  uint extraout_XMM0_Da;
  uint uVar8;
  uint extraout_XMM0_Db;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar10 = 0;
  uVar11 = 0;
  if ((float)param_1 == 0.0) {
    if (*(long *)(param_9 + 0x38) != 0) {
      if (*(long *)(param_9 + 0x48) != 0) {
        puVar4 = getbytes(*(long *)(param_9 + 0x30) * 0x10 + 0x10);
        *(uint **)(param_9 + 0x40) = puVar4;
        lVar7 = *(long *)(param_9 + 0x30);
        uVar8 = extraout_XMM0_Da;
        uVar9 = extraout_XMM0_Db;
        if (0 < lVar7) {
          puVar1 = *(uint **)(param_9 + 0x48);
          uVar8 = *puVar1;
          uVar9 = puVar1[1];
          uVar2 = puVar1[2];
          uVar3 = puVar1[3];
          *puVar4 = uVar8;
          puVar4[1] = uVar9;
          puVar4[2] = uVar2;
          puVar4[3] = uVar3;
          lVar7 = *(long *)(param_9 + 0x30);
          if (1 < lVar7) {
            lVar5 = 1;
            lVar6 = 0x10;
            do {
              puVar4 = (uint *)(*(long *)(param_9 + 0x48) + lVar6);
              uVar8 = *puVar4;
              uVar9 = puVar4[1];
              uVar2 = puVar4[2];
              uVar3 = puVar4[3];
              puVar4 = (uint *)(*(long *)(param_9 + 0x40) + lVar6);
              *puVar4 = uVar8;
              puVar4[1] = uVar9;
              puVar4[2] = uVar2;
              puVar4[3] = uVar3;
              lVar5 = lVar5 + 1;
              lVar7 = *(long *)(param_9 + 0x30);
              lVar6 = lVar6 + 0x10;
            } while (lVar5 < lVar7);
          }
          puVar4 = *(uint **)(param_9 + 0x40);
        }
        initmess_send(CONCAT44(uVar9,uVar8),CONCAT44(uVar11,uVar10),param_3,param_4,param_5,param_6,
                      param_7,param_8,param_9,*(undefined8 **)(param_9 + 0x58),(int)lVar7,puVar4,
                      in_R8,in_R9);
      }
      *(undefined8 *)(param_9 + 0x38) = 0;
      return;
    }
    if (*(long *)(param_9 + 0x48) != 0) {
      initmess_send(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    *(undefined8 **)(param_9 + 0x58),*(int *)(param_9 + 0x30),
                    *(uint **)(param_9 + 0x40),in_R8,in_R9);
      return;
    }
  }
  return;
}


