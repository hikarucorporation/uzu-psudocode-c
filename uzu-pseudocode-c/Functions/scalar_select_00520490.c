// Function : scalar_select
// Namespace: 
// Entry    : 00520490
// Prototype: undefined scalar_select(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 * param_10, int param_11, undefined8 param_12, uint * param_13, uint * param_14)
// Body     : 00520490 - 00520665


void scalar_select(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                  undefined8 *param_10,int param_11,undefined8 param_12,uint *param_13,
                  uint *param_14)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 in_stack_ffffffffffffff08;
  int local_f0;
  int local_ec;
  char local_e8 [4];
  int local_e4;
  long local_e0;
  undefined4 local_d8;
  void *local_d0;
  int local_c8 [2];
  long *local_c0;
  char local_b8 [136];
  
  lVar2 = *(long *)(param_9 + 0x10);
  local_d0 = (void *)param_10[7];
  local_d8 = *(undefined4 *)(param_10 + 8);
  *(int *)((long)local_d0 + 0xc) = *(int *)((long)local_d0 + 0xc) + 1;
  local_c8[0] = 3;
  local_c0 = &local_e0;
  puVar3 = param_10;
  local_e0 = param_9;
  lVar2 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar2)
  ;
  uVar4 = extraout_RDX;
  uVar7 = extraout_XMM0_Qa;
  if (lVar2 != 0) {
    pcVar6 = "select";
    if (param_11 == 0) {
      pcVar6 = "deselect";
    }
    puVar3 = gensym(pcVar6);
    uVar7 = template_notify(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,lVar2,puVar3,1,local_c8,param_13,param_14);
    uVar4 = extraout_RDX_00;
  }
  if (local_d0 != (void *)0x0) {
    iVar1 = *(int *)((long)local_d0 + 0xc);
    uVar5 = iVar1 - 1;
    *(uint *)((long)local_d0 + 0xc) = uVar5;
    if (uVar5 == 0) {
      if (*(int *)((long)local_d0 + 8) == 0) {
        freebytes(local_d0);
      }
    }
    else if (iVar1 < 1) {
      bug(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"gstub_dis",puVar3,uVar4,
          (ulong)uVar5,(char *)param_13,param_14,in_stack_ffffffffffffff08);
    }
    local_d0 = (void *)0x0;
  }
  sprintf(local_b8,"select%p",(void *)param_9);
  if (param_11 == 0) {
    uVar4 = glist_getcanvas((long)param_10);
    pdgui_vmess(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs",
                uVar4,"delete",local_b8,param_14,in_stack_ffffffffffffff08);
  }
  else {
    scalar_getrect(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   param_9,(long)param_10,&local_e4,(int *)local_e8,&local_ec,&local_f0);
    uVar4 = glist_getcanvas((long)param_10);
    pdgui_vmess(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                "crr iiiiiiiiii ri rr rs",uVar4,"create","line",(ulong)(local_e4 - 1),
                local_e8[0] + -1);
  }
  return;
}


