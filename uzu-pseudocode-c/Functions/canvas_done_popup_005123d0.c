// Function : canvas_done_popup
// Namespace: 
// Entry    : 005123d0
// Prototype: undefined canvas_done_popup(float param_1, float param_2, undefined8 param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, long * param_10, undefined8 param_11, int * param_12, int * param_13, int * param_14)
// Body     : 005123d0 - 00512721


void canvas_done_popup(float param_1,float param_2,double param_3,double param_4,double param_5,
                      double param_6,double param_7,undefined8 param_8,long *param_9,long *param_10,
                      undefined8 param_11,int *param_12,int *param_13,int *param_14)

{
  bool bVar1;
  undefined7 extraout_var;
  long lVar2;
  code *pcVar3;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  char *pcVar4;
  size_t sVar5;
  undefined8 *puVar6;
  undefined7 extraout_var_02;
  int *piVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 in_stack_fffffffffffffbc8;
  undefined7 in_stack_fffffffffffffbc9;
  int local_430;
  int local_42c;
  int local_428;
  float local_424;
  undefined8 local_420;
  int local_418 [249];
  undefined1 local_31;
  
  plVar8 = (long *)param_9[6];
  local_424 = param_1;
  if (plVar8 != (long *)0x0) {
    iVar11 = (int)param_2;
    iVar10 = (int)SUB84(param_3,0);
    uVar14 = 0;
    if (param_1 == 0.0) {
      do {
        param_10 = param_9;
        bVar1 = gobj_shouldvis(plVar8,param_9);
        param_11 = extraout_RDX;
        if ((int)CONCAT71(extraout_var,bVar1) != 0) {
          param_12 = &local_428;
          param_10 = param_9;
          param_13 = &local_42c;
          param_14 = &local_430;
          gobj_getrect(plVar8,param_9,local_418,param_12,&local_42c,&local_430);
          param_11 = extraout_RDX_00;
          if (((local_418[0] <= iVar11) && (iVar11 <= local_42c)) &&
             ((local_428 <= iVar10 &&
              ((iVar10 <= local_430 &&
               (lVar2 = class_getpropertiesfn(*plVar8), param_11 = extraout_RDX_01, lVar2 != 0))))))
          {
            pcVar3 = (code *)class_getpropertiesfn(*plVar8);
            (*pcVar3)(plVar8,param_9);
            return;
          }
        }
        plVar8 = (long *)plVar8[1];
      } while (plVar8 != (long *)0x0);
    }
    else if (param_1 == DAT_005d9038) {
      do {
        param_10 = param_9;
        bVar1 = gobj_shouldvis(plVar8,param_9);
        param_11 = extraout_RDX_02;
        if ((int)CONCAT71(extraout_var_00,bVar1) != 0) {
          param_12 = &local_428;
          param_10 = param_9;
          param_13 = &local_42c;
          param_14 = &local_430;
          gobj_getrect(plVar8,param_9,local_418,param_12,&local_42c,&local_430);
          param_11 = extraout_RDX_03;
          if (((local_418[0] <= iVar11) && (iVar11 <= local_42c)) &&
             ((local_428 <= iVar10 && (iVar10 <= local_430)))) {
            param_10 = gensym("menu-open");
            lVar2 = zgetfn(plVar8,(long)param_10);
            param_11 = extraout_RDX_04;
            if (lVar2 != 0) {
              puVar6 = gensym("menu-open");
              pd_vmess(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(uVar14,param_1),param_3,
                       param_4,param_5,param_6,param_7,param_8,(long)plVar8,puVar6,0x5e2ee7,param_12
                       ,param_13,param_14,
                       (double)CONCAT71(in_stack_fffffffffffffbc9,in_stack_fffffffffffffbc8));
              return;
            }
          }
        }
        plVar8 = (long *)plVar8[1];
      } while (plVar8 != (long *)0x0);
    }
    else {
      local_420 = local_418;
      do {
        param_10 = param_9;
        bVar1 = gobj_shouldvis(plVar8,param_9);
        param_11 = extraout_RDX_05;
        if ((int)CONCAT71(extraout_var_01,bVar1) != 0) {
          param_12 = &local_428;
          param_10 = param_9;
          param_13 = &local_42c;
          param_14 = &local_430;
          gobj_getrect(plVar8,param_9,local_418,param_12,&local_42c,&local_430);
          param_11 = extraout_RDX_06;
          if ((((local_418[0] <= iVar11) && (iVar11 <= local_42c)) && (local_428 <= iVar10)) &&
             (iVar10 <= local_430)) {
            lVar2 = *plVar8;
            if (lVar2 == *(long *)PTR_canvas_class_00715918) {
              bVar1 = canvas_isabstraction((long)plVar8);
              if ((int)CONCAT71(extraout_var_02,bVar1) == 0) {
                lVar2 = *plVar8;
                goto LAB_005125d6;
              }
              iVar10 = binbuf_getnatom((undefined4 *)plVar8[2]);
              piVar7 = (int *)binbuf_getvec(plVar8[2]);
              if (iVar10 < 1) {
                return;
              }
              atom_string(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),CONCAT44(uVar14,param_1)
                          ,param_3,param_4,param_5,param_6,param_7,param_8,piVar7,(char *)local_418,
                          (uint *)0x3e8,param_12,(char *)param_13,param_14,in_stack_fffffffffffffbc8
                         );
              uVar9 = 0x2f;
              pcVar4 = strrchr((char *)local_418,0x2f);
              local_420 = (int *)(pcVar4 + 1);
              if (pcVar4 == (char *)0x0) {
                local_420 = local_418;
              }
              puVar6 = (undefined8 *)
                       canvas_getdir(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),
                                     CONCAT44(uVar14,param_1),param_3,param_4,param_5,param_6,
                                     param_7,param_8,(long)plVar8,uVar9,extraout_RDX_07,local_420,
                                     (char *)param_13,param_14);
              pcVar4 = (char *)*puVar6;
              sVar5 = strlen((char *)local_418);
              if (3 < sVar5) goto LAB_00512614;
LAB_005126fb:
              sVar5 = strlen((char *)local_418);
              *(undefined4 *)((long)local_418 + sVar5) = 0x64702e;
              uVar12 = extraout_XMM0_Da_04;
              uVar13 = extraout_XMM0_Db_04;
            }
            else {
LAB_005125d6:
              pcVar4 = (char *)class_gethelpname(lVar2);
              strncpy((char *)local_418,pcVar4,999);
              local_31 = 0;
              pcVar4 = (char *)class_gethelpdir(*plVar8);
              sVar5 = strlen((char *)local_418);
              if (sVar5 < 4) goto LAB_005126fb;
LAB_00512614:
              iVar10 = strcmp((char *)((long)local_418 + (sVar5 - 3)),".pd");
              uVar12 = extraout_XMM0_Da_00;
              uVar13 = extraout_XMM0_Db_00;
              if (iVar10 != 0) goto LAB_005126fb;
            }
            piVar7 = local_420;
            goto LAB_0051266b;
          }
        }
        plVar8 = (long *)plVar8[1];
      } while (plVar8 != (long *)0x0);
    }
  }
  uVar14 = 0;
  if (local_424 == 0.0) {
    canvas_properties(0,(ulong)(uint)local_424,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long)param_9,param_10,param_11,param_12,(char *)param_13,param_14);
  }
  else if (local_424 == DAT_005d9078) {
    param_1 = local_424;
    puVar6 = (undefined8 *)
             canvas_getdir((ulong)(uint)local_424,(ulong)(uint)local_424,param_3,param_4,param_5,
                           param_6,param_7,param_8,(long)param_9,param_10,param_11,param_12,
                           (char *)param_13,param_14);
    pcVar4 = (char *)*puVar6;
    piVar7 = (int *)"intro.pd";
    uVar12 = extraout_XMM0_Da_01;
    uVar13 = extraout_XMM0_Db_01;
LAB_0051266b:
    open_via_helppath(CONCAT44(uVar13,uVar12),CONCAT44(uVar14,param_1),param_3,param_4,param_5,
                      param_6,param_7,param_8,(char *)piVar7,pcVar4);
  }
  return;
}


