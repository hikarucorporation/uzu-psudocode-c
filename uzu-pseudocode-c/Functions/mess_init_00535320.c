// Function : mess_init
// Namespace: 
// Entry    : 00535320
// Prototype: undefined mess_init(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00535320 - 005354f7


void mess_init(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
              char *param_13,undefined8 param_14)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  undefined **ppuVar8;
  undefined8 unaff_R14;
  int *piVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da_00;
  undefined8 uVar11;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Db_00;
  uint uVar13;
  uint uVar14;
  
  puVar3 = PTR_pd_maininstance_00715748;
  puVar2 = PTR_pd_objectmaker_00715510;
  if (*(long *)PTR_pd_objectmaker_00715510 != 0) {
    return;
  }
  ppuVar8 = &PTR_007159b0;
  plVar5 = (long *)__tls_get_addr();
  *plVar5 = (long)puVar3;
  s_inter_newpdinstance();
  uVar11 = sys_lock();
  pd_globallock(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,ppuVar8,param_10,
                extraout_RDX,param_12,param_13,param_14);
  pdinstance_init((undefined8 *)puVar3);
  class_extern_dir = *plVar5 + 0x168;
  lVar1 = *(long *)(*plVar5 + 0x28);
  piVar9 = *(int **)(lVar1 + 0x8660);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)(lVar1 + 0x8660);
  }
  else {
    do {
      piVar6 = piVar9;
      iVar4 = strcmp(*(char **)piVar6,"objectmaker");
      uVar10 = extraout_XMM0_Da;
      uVar12 = extraout_XMM0_Db;
      if (iVar4 == 0) goto LAB_00535403;
      piVar9 = *(int **)(piVar6 + 4);
    } while (*(int **)(piVar6 + 4) != (int *)0x0);
    piVar9 = piVar6 + 4;
  }
  piVar6 = getbytes(0x18);
  puVar7 = getbytes(0xc);
  uVar10 = 0;
  uVar12 = 0;
  piVar6[2] = 0;
  piVar6[3] = 0;
  piVar6[4] = 0;
  piVar6[5] = 0;
  *puVar7 = 0x616d7463656a626f;
  *(undefined4 *)(puVar7 + 1) = 0x72656b;
  *(undefined8 **)piVar6 = puVar7;
  *(int **)piVar9 = piVar6;
LAB_00535403:
  puVar7 = class_new(CONCAT44(uVar12,uVar10),param_2,param_3,param_4,param_5,param_6,param_7,param_8
                     ,piVar6,0,0,8,(char *)0x0,0,(uint)unaff_RBX,(uint)unaff_R14);
  *(undefined8 **)puVar2 = puVar7;
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar14 = (uint)unaff_R14;
  uVar13 = (uint)unaff_RBX;
  piVar9 = *(int **)(*(long *)(*plVar5 + 0x28) + 0x2b88);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)(*(long *)(*plVar5 + 0x28) + 0x2b88);
  }
  else {
    do {
      piVar6 = piVar9;
      iVar4 = strcmp(*(char **)piVar6,"canvasmaker");
      uVar14 = (uint)unaff_R14;
      uVar13 = (uint)unaff_RBX;
      uVar10 = extraout_XMM0_Da_00;
      uVar12 = extraout_XMM0_Db_00;
      if (iVar4 == 0) goto LAB_005354b3;
      piVar9 = *(int **)(piVar6 + 4);
    } while (*(int **)(piVar6 + 4) != (int *)0x0);
    piVar9 = piVar6 + 4;
  }
  piVar6 = getbytes(0x18);
  puVar7 = getbytes(0xc);
  uVar10 = 0;
  uVar12 = 0;
  piVar6[2] = 0;
  piVar6[3] = 0;
  piVar6[4] = 0;
  piVar6[5] = 0;
  *puVar7 = 0x616d7361766e6163;
  *(undefined4 *)(puVar7 + 1) = 0x72656b;
  *(undefined8 **)piVar6 = puVar7;
  *(int **)piVar9 = piVar6;
LAB_005354b3:
  puVar7 = class_new(CONCAT44(uVar12,uVar10),param_2,param_3,param_4,param_5,param_6,param_7,param_8
                     ,piVar6,0,0,8,(char *)0x0,0,uVar13,uVar14);
  *(undefined8 **)PTR_pd_canvasmaker_00715c00 = puVar7;
  lVar1 = *(long *)puVar2;
  if (lVar1 != 0) {
    *(undefined **)(lVar1 + 0x60) = PTR_new_anything_00715b30;
  }
  pd_globalunlock();
  sys_unlock();
  return;
}


