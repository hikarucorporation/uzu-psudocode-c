// Function : word_restore
// Namespace: 
// Entry    : 0051f530
// Prototype: undefined word_restore(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, int param_11, int * param_12)
// Body     : 0051f530 - 0051f604


void word_restore(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,long param_10,int param_11,int *param_12)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar6;
  int iVar7;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  iVar1 = *(int *)(param_10 + 0x18);
  if (0 < iVar1) {
    piVar4 = *(int **)(param_10 + 0x20);
    lVar5 = 0;
    do {
      if (*piVar4 == 1) {
        if (param_11 == 0) {
          plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
          lVar3 = *plVar2 + 0x168;
          param_11 = 0;
          uVar6 = extraout_XMM0_Da;
          uVar8 = extraout_XMM0_Db;
        }
        else {
          lVar3 = atom_getsymbol(param_12);
          param_12 = param_12 + 4;
          param_11 = param_11 + -1;
          uVar6 = extraout_XMM0_Da_00;
          uVar8 = extraout_XMM0_Db_01;
        }
        param_1 = CONCAT44(uVar8,uVar6);
        *(long *)(param_9 + lVar5 * 8) = lVar3;
      }
      else if (*piVar4 == 0) {
        if (param_11 == 0) {
          param_1 = 0;
          param_11 = 0;
          *(undefined4 *)(param_9 + lVar5 * 8) = 0;
        }
        else {
          iVar7 = atom_getfloat(param_12);
          param_1 = CONCAT44(extraout_XMM0_Db_00,iVar7);
          param_12 = param_12 + 4;
          param_11 = param_11 + -1;
          *(int *)(param_9 + lVar5 * 8) = iVar7;
        }
      }
      piVar4 = piVar4 + 6;
      lVar5 = lVar5 + 1;
    } while (iVar1 != (int)lVar5);
  }
  if (param_11 == 0) {
    return;
  }
  post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "warning: word_restore: extra arguments");
  return;
}


