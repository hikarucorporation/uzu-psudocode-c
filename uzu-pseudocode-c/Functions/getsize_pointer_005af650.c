// Function : getsize_pointer
// Namespace: 
// Entry    : 005af650
// Prototype: undefined getsize_pointer(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005af650 - 005af797


void getsize_pointer(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,long *param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  char cVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined7 extraout_var;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long extraout_RAX;
  long lVar6;
  int *piVar7;
  undefined8 extraout_RDX;
  char *pcVar8;
  char *pcVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Db_02;
  int local_40;
  int local_3c;
  char local_38 [8];
  
  puVar5 = *(undefined8 **)(param_9 + 0x38);
  lVar6 = param_10[2];
  bVar3 = gpointer_check(param_10,0);
  if ((int)CONCAT71(extraout_var,bVar3) == 0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,"getsize: stale or empty pointer",extraout_RDX,param_12,
             param_13,param_14);
    return;
  }
  puVar2 = *(undefined8 **)(param_9 + 0x30);
  cVar1 = *(char *)*puVar2;
  puVar4 = (undefined8 *)gpointer_gettemplatesym(param_10);
  if ((cVar1 != '\0') && (bVar3 = puVar2 != puVar4, puVar4 = puVar2, bVar3)) {
    uVar10 = *puVar2;
    puVar5 = (undefined8 *)gpointer_gettemplatesym(param_10);
    pd_error(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,param_9,"getsize %s: got wrong template (%s)",uVar10,*puVar5,
             param_13,param_14);
    return;
  }
  uVar10 = template_findbyname(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                               param_4,param_5,param_6,param_7,param_8,(long)puVar4);
  if (extraout_RAX == 0) {
    pd_error(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "getsize: couldn\'t find template %s",*puVar4,param_12,param_13,param_14);
    return;
  }
  piVar7 = &local_40;
  pcVar9 = local_38;
  uVar10 = template_find_field(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               extraout_RAX,(long)puVar5,&local_3c,piVar7,pcVar9,param_14);
  if ((int)uVar10 == 0) {
    uVar10 = *puVar5;
    pcVar8 = "getsize: couldn\'t find array field %s";
  }
  else {
    if (local_40 == 3) {
      if (*(int *)(lVar6 + 8) == 2) {
        lVar6 = *param_10;
      }
      else {
        lVar6 = *param_10 + 0x18;
      }
      outlet_float(CONCAT44(extraout_XMM0_Db_02,(float)**(int **)(lVar6 + local_3c)),param_2,param_3
                   ,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
      return;
    }
    uVar10 = *puVar5;
    pcVar8 = "getsize: field %s not of type array";
  }
  pd_error(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,param_6
           ,param_7,param_8,param_9,pcVar8,uVar10,piVar7,pcVar9,param_14);
  return;
}


