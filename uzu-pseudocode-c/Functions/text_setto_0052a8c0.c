// Function : text_setto
// Namespace: 
// Entry    : 0052a8c0
// Prototype: undefined text_setto(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, byte * param_11, int param_12, char * param_13, undefined8 param_14)
// Body     : 0052a8c0 - 0052abcb


void text_setto(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
               long *param_10,byte *param_11,int param_12,char *param_13,uint *param_14)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined4 in_stack_ffffffffffffffb8;
  
  lVar6 = glist_getcanvas((long)param_10);
  iVar3 = glist_getindex(lVar6,(long)param_9);
  if ((*(byte *)((long)param_9 + 0x2e) & 3) != 1) {
    lVar6 = glist_getcanvas((long)param_10);
    lVar10 = glist_getcanvas((long)param_10);
    puVar14 = canvas_undo_set_recreate
                        (extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,lVar10,param_9,iVar3);
    canvas_undo_add(extraout_XMM0_Qa_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    lVar6,10,"recreate",puVar14,param_13,param_14);
    binbuf_text(extraout_XMM0_Qa_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                (uint *)param_9[2],param_11,(long)param_12);
    return;
  }
  puVar7 = binbuf_new();
  sVar1 = *(short *)((long)param_9 + 0x2c);
  binbuf_text(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar7,
              param_11,(long)param_12);
  iVar4 = binbuf_getnatom((undefined4 *)param_9[2]);
  piVar8 = (int *)binbuf_getvec(param_9[2]);
  iVar5 = binbuf_getnatom(puVar7);
  piVar9 = (int *)binbuf_getvec((long)puVar7);
  if (((((iVar4 < 1) || (iVar5 < 1)) || (*piVar8 != 2)) ||
      ((iVar4 = strcmp((char *)**(undefined8 **)(piVar8 + 2),"pd"), iVar4 != 0 || (*piVar9 != 2))))
     || (iVar4 = strcmp((char *)**(undefined8 **)(piVar9 + 2),"pd"), iVar4 != 0)) {
    lVar6 = param_9[5];
    uVar2 = *(undefined2 *)((long)param_9 + 0x2a);
    lVar10 = glist_getcanvas((long)param_10);
    lVar11 = glist_getcanvas((long)param_10);
    plVar12 = (long *)canvas_undo_set_recreate
                                (extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7
                                 ,param_8,lVar11,param_9,iVar3);
    canvas_undo_add(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    lVar10,10,"recreate",plVar12,param_13,param_14);
    uVar16 = glist_delete(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,param_10,param_9,extraout_RDX,plVar12,param_13,param_14);
    puVar13 = (undefined8 *)(ulong)(uint)(int)(short)lVar6;
    uVar15 = 0;
    canvas_objtext(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                   (short)lVar6,uVar2,(ulong)(uint)(int)sVar1,0,puVar7);
    lVar6 = glist_getcanvas((long)param_10);
    canvas_restoreconnections
              (extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar6);
    plVar12 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar12 = *(long **)(*plVar12 + 0x58);
    if (plVar12 != (long *)0x0) {
      if (*plVar12 == *(long *)PTR_canvas_class_00715918) {
        canvas_loadbang(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        (long)plVar12,puVar13,extraout_RDX_00,PTR_canvas_class_00715918,uVar15,
                        puVar7);
      }
      else {
        puVar13 = gensym("loadbang");
        lVar6 = zgetfn(plVar12,(long)puVar13);
        if (lVar6 != 0) {
          plVar12 = (long *)__tls_get_addr(&PTR_007159b0);
          lVar6 = *(long *)(*plVar12 + 0x58);
          puVar13 = gensym("loadbang");
          pd_vmess(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar6
                   ,puVar13,0x651ee3,0,uVar15,puVar7,
                   (double)CONCAT44(iVar3,in_stack_ffffffffffffffb8));
        }
      }
    }
  }
  else {
    lVar6 = glist_getcanvas((long)param_10);
    lVar10 = glist_getcanvas((long)param_10);
    puVar14 = canvas_undo_set_recreate
                        (extraout_XMM0_Qa_10,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,lVar10,param_9,iVar3);
    canvas_undo_add(extraout_XMM0_Qa_11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    lVar6,10,"recreate",puVar14,param_13,param_14);
    puVar13 = gensym("rename");
    pd_typedmess(extraout_XMM0_Qa_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                 ,puVar13,iVar5 - 1,piVar9 + 4,(uint *)param_13,param_14);
    binbuf_free((void *)param_9[2]);
    param_9[2] = (long)puVar7;
  }
  if (((iVar5 < 1) || (*piVar9 != 2)) ||
     (iVar3 = strcmp((char *)**(undefined8 **)(piVar9 + 2),"pd"), iVar3 != 0)) {
    return;
  }
  canvas_updatewindowlist
            (extraout_XMM0_Qa_09,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


