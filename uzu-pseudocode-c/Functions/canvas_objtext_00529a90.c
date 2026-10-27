// Function : canvas_objtext
// Namespace: 
// Entry    : 00529a90
// Prototype: undefined canvas_objtext(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined2 param_10, undefined2 param_11, undefined8 param_12, undefined8 param_13, uint * param_14)
// Body     : 00529a90 - 00529c24


void canvas_objtext(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,undefined2 param_10,undefined2 param_11,undefined8 param_12,
                   char *param_13,uint *param_14)

{
  undefined2 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 uVar7;
  undefined8 extraout_RDX_09;
  uint *puVar8;
  long *plVar9;
  int iVar10;
  uint *puVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined1 in_stack_ffffffffffffffb8;
  uint local_3c;
  long local_38;
  
  iVar10 = (int)param_13;
  uVar1 = (undefined2)param_12;
  puVar11 = param_14;
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  *(undefined8 *)(*plVar3 + 0x58) = 0;
  uVar12 = canvas_setcurrent(param_9);
  uVar12 = canvas_getargs(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_3c,
                          &local_38,extraout_RDX,param_12,param_13,puVar11);
  puVar8 = (uint *)PTR_pd_objectmaker_00715510;
  binbuf_eval(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_14,
              (uint *)PTR_pd_objectmaker_00715510,(ulong)local_3c,local_38,param_13,puVar11);
  iVar2 = binbuf_getnatom(param_14);
  uVar12 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  lVar5 = local_38;
  uVar7 = extraout_RDX_00;
  if (iVar2 == 0) {
LAB_00529b42:
    plVar3 = pd_new(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    *(long *)PTR_text_class_00715c88,puVar8,uVar7,lVar5,param_13,puVar11);
    uVar12 = canvas_error_couldntcreate
                       (CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long)plVar3,(int *)param_14,
                        "... couldn\'t create",lVar5,param_13,puVar11);
    uVar7 = extraout_RDX_04;
  }
  else {
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    uVar12 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    lVar5 = local_38;
    uVar7 = extraout_RDX_01;
    if (*(long **)(*plVar3 + 0x58) == (long *)0x0) goto LAB_00529b42;
    plVar3 = pd_checkobject(*(long **)(*plVar3 + 0x58));
    uVar12 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
    lVar5 = local_38;
    uVar7 = extraout_RDX_02;
    if (plVar3 == (long *)0x0) {
      puVar8 = param_14;
      uVar12 = canvas_error_couldntcreate
                         (CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,0,(int *)param_14,
                          "... didn\'t return a patchable object",local_38,param_13,puVar11);
      lVar5 = local_38;
      uVar7 = extraout_RDX_03;
      goto LAB_00529b42;
    }
  }
  plVar3[2] = (long)param_14;
  *(undefined2 *)(plVar3 + 5) = param_10;
  *(undefined2 *)((long)plVar3 + 0x2a) = param_11;
  *(undefined2 *)((long)plVar3 + 0x2c) = uVar1;
  *(byte *)((long)plVar3 + 0x2e) = *(byte *)((long)plVar3 + 0x2e) & 0xfc | 1;
  plVar9 = plVar3;
  uVar12 = glist_add(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,plVar3,
                     uVar7,lVar5,param_13,puVar11);
  uVar7 = extraout_RDX_05;
  if (iVar10 != 0) {
    glist_select(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,plVar3
                 ,extraout_RDX_05,lVar5,param_13,puVar11);
    plVar9 = param_9;
    gobj_activate(plVar3);
    uVar12 = canvas_dirty(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)param_9,(char *)plVar9,extraout_RDX_06,lVar5,param_13,puVar11);
    uVar7 = extraout_RDX_07;
  }
  if (*plVar3 == *(long *)PTR_vinlet_class_00715ab8) {
    plVar4 = (long *)glist_getcanvas((long)param_9);
    uVar12 = canvas_resortinlets(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,
                                 param_4,param_5,param_6,param_7,param_8,plVar4);
    puVar6 = PTR_voutlet_class_00715fc0;
    uVar7 = extraout_RDX_09;
    if (*plVar3 != *(long *)PTR_voutlet_class_00715fc0) goto LAB_00529bed;
  }
  else {
    puVar6 = PTR_voutlet_class_00715fc0;
    if (*plVar3 != *(long *)PTR_voutlet_class_00715fc0) goto LAB_00529bed;
  }
  puVar6 = PTR_voutlet_class_00715fc0;
  plVar3 = (long *)glist_getcanvas((long)param_9);
  uVar12 = canvas_resortoutlets
                     (CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,plVar3);
  uVar7 = extraout_RDX_08;
LAB_00529bed:
  canvas_unsetcurrent(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                      plVar9,uVar7,puVar6,param_13,puVar11,in_stack_ffffffffffffffb8);
  return;
}


