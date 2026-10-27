// Function : gatom_vis
// Namespace: 
// Entry    : 0052e010
// Prototype: undefined gatom_vis(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0052e010 - 0052e222


void gatom_vis(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long *param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
              undefined8 param_14)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int iVar10;
  undefined *puVar11;
  int *piVar12;
  int *piVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar14;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 auVar15 [16];
  int aiStack_464 [3];
  int in_stack_fffffffffffffba8;
  int local_454;
  int local_450;
  int local_44c;
  double local_448;
  double local_440;
  char *local_438;
  char *local_430;
  char *local_428;
  char local_418 [1000];
  
  text_vis(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11
           ,param_12,param_13,param_14);
  if (**(char **)param_9[10] != '\0') {
    puVar11 = &DAT_00655bb3;
    sprintf(local_418,"%p.l",param_9);
    if ((int)param_11 == 0) {
      uVar14 = glist_getcanvas((long)param_10);
      pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                  "crs",uVar14,"delete",local_418,param_14,(char)in_stack_fffffffffffffba8);
    }
    else {
      local_430 = "label";
      local_428 = "text";
      local_438 = local_418;
      iVar2 = glist_getzoom((long)param_10);
      uVar3 = *(uint *)((long)param_9 + 0x74);
      uVar14 = extraout_XMM0_Qa;
      if (uVar3 == 0) {
        uVar3 = glist_getfont(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,param_9[7],puVar11,extraout_RDX,param_12,param_13,param_14);
        uVar14 = extraout_XMM0_Qa_00;
      }
      piVar9 = aiStack_464 + 3;
      piVar12 = &local_44c;
      piVar13 = &local_450;
      uVar14 = text_getrect(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            (long)param_9,(long)param_10,&local_454,aiStack_464 + 3,piVar12,piVar13)
      ;
      bVar1 = *(byte *)(param_9 + 0xf) >> 1 & 3;
      if (bVar1 == 2) {
        iVar10 = local_454 - iVar2;
        iVar4 = sys_zoomfontheight(uVar3,iVar2,0);
        in_stack_fffffffffffffba8 = in_stack_fffffffffffffba8 - (iVar4 + iVar2);
      }
      else if (bVar1 == 1) {
        iVar10 = local_44c + iVar2 * 2;
        in_stack_fffffffffffffba8 = iVar2 * 2 + in_stack_fffffffffffffba8;
      }
      else if (bVar1 == 0) {
        puVar6 = canvas_realizedollar
                           (uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            param_9[7],(undefined8 *)param_9[10],extraout_RDX_00,piVar9,
                            (char *)piVar12,piVar13);
        sVar7 = strlen((char *)*puVar6);
        iVar4 = sys_zoomfontwidth(uVar3,iVar2,0);
        iVar10 = (local_454 + iVar2 * -3) - iVar4 * (int)sVar7;
        in_stack_fffffffffffffba8 = iVar2 * 2 + in_stack_fffffffffffffba8;
      }
      else {
        iVar10 = local_454 - iVar2;
        in_stack_fffffffffffffba8 = iVar2 * 3 + local_450;
      }
      auVar15 = glist_getcanvas((long)param_10);
      local_440 = (double)iVar10;
      local_448 = (double)in_stack_fffffffffffffba8;
      puVar6 = (undefined8 *)param_9[10];
      puVar8 = canvas_realizedollar
                         (local_448,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          param_9[7],puVar6,auVar15._8_8_,piVar9,(char *)piVar12,piVar13);
      uVar14 = *puVar8;
      iVar2 = *(int *)((long)param_9 + 0x74);
      if (iVar2 == 0) {
        iVar2 = glist_getfont(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,param_9[7],puVar6,extraout_RDX_01,piVar9,(char *)piVar12,
                              piVar13);
      }
      uVar5 = glist_getzoom((long)param_10);
      pdgui_vmess(local_440,local_448,param_3,param_4,param_5,param_6,param_7,param_8,0x655278,
                  "cS ff s ir",auVar15._0_8_,3,&local_438,uVar14,(char)uVar5 * (char)iVar2);
    }
  }
  return;
}


