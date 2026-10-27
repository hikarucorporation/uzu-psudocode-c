// Function : subcanvas_new
// Namespace: 
// Entry    : 00501e40
// Prototype: long * subcanvas_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, undefined8 * param_9)
// Body     : 00501e40 - 00502114


long * subcanvas_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    double param_5,double param_6,double param_7,undefined8 param_8,
                    undefined8 *param_9)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined7 extraout_var;
  undefined4 *puVar10;
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
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  uint uVar11;
  char *pcVar12;
  uint *in_R8;
  undefined4 *in_R9;
  bool bVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar14;
  float fVar15;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar16;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 local_30;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  pcVar12 = (char *)(*plVar2 + 0x120);
  plVar2 = *(long **)PTR_canvas_class_00715918;
  plVar3 = pd_findbyclass(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,(long)pcVar12,(long)plVar2);
  uVar14 = extraout_XMM0_Da_00;
  uVar17 = extraout_XMM0_Db_00;
  if (*(char *)*param_9 == '\0') {
    pcVar12 = "/SUBPATCH/";
    param_9 = gensym("/SUBPATCH/");
    uVar14 = extraout_XMM0_Da_01;
    uVar17 = extraout_XMM0_Db_01;
  }
  local_88[0] = 1;
  local_80 = 0;
  local_78 = 1;
  local_70 = 0x42480000;
  local_68 = 1;
  local_60 = (undefined8 *)CONCAT44(local_60._4_4_,0x43e10000);
  local_58 = 1;
  local_50 = 0x43960000;
  local_48 = 2;
  local_38 = 1;
  local_30 = 0x3f800000;
  puVar10 = local_88;
  local_40 = param_9;
  plVar4 = canvas_new(CONCAT44(uVar17,uVar14),param_2,param_3,param_4,param_5,param_6,param_7,
                      param_8,pcVar12,plVar2,6,(long)puVar10,in_R8,in_R9);
  uVar16 = extraout_RDX;
  if (((plVar3 != (long *)0x0) && (plVar3[0x18] != 0)) &&
     (lVar5 = *(long *)(plVar3[0x18] + 0x48), lVar5 != 0)) {
    lVar5 = binbuf_getvec(lVar5);
    iVar1 = binbuf_getnatom(*(undefined4 **)(plVar3[0x18] + 0x48));
    uVar16 = extraout_RDX_00;
    if (iVar1 == 7) {
      plVar2 = (long *)0x7;
      puVar6 = (undefined8 *)atom_getsymbolarg(0,7,lVar5);
      puVar7 = gensym("#X");
      uVar16 = extraout_RDX_01;
      if (puVar6 == puVar7) {
        plVar2 = (long *)0x7;
        puVar6 = (undefined8 *)atom_getsymbolarg(1,7,lVar5);
        puVar7 = gensym("connect");
        uVar16 = extraout_RDX_02;
        if (puVar6 == puVar7) {
          plVar9 = (long *)plVar3[6];
          iVar1 = 0;
          if ((plVar9 != (long *)0x0) && (plVar9 != plVar4)) {
            iVar1 = 0;
            do {
              iVar1 = iVar1 + 1;
              plVar9 = (long *)plVar9[1];
              if (plVar9 == (long *)0x0) break;
            } while (plVar9 != plVar4);
          }
          fVar15 = (float)atom_getfloat((int *)(lVar5 + 0x50));
          uVar16 = extraout_RDX_03;
          if (((int)fVar15 == 0) &&
             (fVar15 = (float)atom_getfloat((int *)(lVar5 + 0x40)), uVar16 = extraout_RDX_04,
             iVar1 == (int)fVar15)) {
            fVar15 = (float)atom_getfloat((int *)(lVar5 + 0x20));
            uVar11 = (uint)fVar15;
            fVar15 = (float)atom_getfloat((int *)(lVar5 + 0x30));
            plVar9 = (long *)plVar3[6];
            bVar13 = plVar9 != (long *)0x0;
            plVar8 = plVar9;
            if (0 < (int)uVar11) {
              while (plVar9 = (long *)0x0, plVar8 != (long *)0x0) {
                plVar9 = (long *)plVar8[1];
                bVar13 = plVar9 != (long *)0x0;
                if (uVar11 < 2) break;
                uVar11 = uVar11 - 1;
                plVar8 = plVar9;
              }
            }
            uVar16 = extraout_RDX_05;
            if ((bVar13) &&
               (plVar8 = pd_checkobject(plVar9), uVar16 = extraout_RDX_06, plVar8 != (long *)0x0)) {
              plVar9 = pd_checkobject(plVar9);
              plVar2 = (long *)(ulong)(uint)(int)fVar15;
              bVar13 = obj_issignaloutlet((long)plVar9,(int)fVar15);
              pcVar12 = "inlet~";
              if ((int)CONCAT71(extraout_var,bVar13) == 0) {
                pcVar12 = "inlet";
              }
              puVar6 = gensym(pcVar12);
              uVar16 = extraout_RDX_07;
              if (puVar6 != (undefined8 *)0x0) {
                local_88[0] = 1;
                local_80 = 0x42140000;
                local_78 = 1;
                local_70 = 0x42140000;
                local_68 = 2;
                local_60 = puVar6;
                puVar6 = gensym("obj");
                puVar10 = local_88;
                uVar16 = canvas_obj(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,
                                    param_3,param_4,param_5,param_6,param_7,param_8,plVar4,puVar6,3,
                                    (long)puVar10,(char *)in_R8,in_R9);
                uVar16 = canvas_create_editor
                                   (uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    (long)plVar4,puVar6,extraout_RDX_08,puVar10,(char *)in_R8,in_R9)
                ;
                uVar16 = glist_noselect(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,
                                        param_8,plVar4,puVar6,extraout_RDX_09,puVar10,(char *)in_R8,
                                        in_R9);
                plVar2 = (long *)plVar4[6];
                glist_select(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             (long)plVar4,plVar2,extraout_RDX_10,puVar10,(char *)in_R8,in_R9);
                uVar16 = extraout_RDX_11;
              }
            }
          }
        }
      }
    }
  }
  plVar4[9] = (long)plVar3;
  canvas_pop((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar4,
             (char *)plVar2,uVar16,(undefined *)puVar10,(char *)in_R8,(undefined *)in_R9);
  return plVar4;
}


