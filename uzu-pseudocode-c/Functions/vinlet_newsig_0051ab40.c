// Function : vinlet_newsig
// Namespace: 
// Entry    : 0051ab40
// Prototype: long * vinlet_newsig(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051ab40 - 0051acbb


long * vinlet_newsig(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,int *param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  uint uVar8;
  undefined4 uVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_vinlet_class_00715ab8,param_10,param_11,param_12,param_13,param_14);
  plVar2 = (long *)canvas_getcurrent(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,
                                     param_7,param_8);
  plVar1[6] = (long)plVar2;
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar2 = canvas_addinlet(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,plVar2,(long)plVar1,*plVar3 + 0xf0,param_12,param_13,param_14);
  plVar1[7] = (long)plVar2;
  *(undefined4 *)(plVar1 + 0xc) = 1;
  *(undefined4 *)(plVar1 + 8) = 0;
  puVar4 = getbytes(0x48);
  plVar1[0xe] = (long)puVar4;
  pvVar5 = getbytes((long)(int)plVar1[8] << 2);
  *puVar4 = pvVar5;
  uVar10 = resample_init((long)(puVar4 + 1));
  plVar1[0xb] = 0;
  plVar1[0xd] = 0;
  outlet_new(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
             *plVar3 + 0xf0,extraout_RDX,param_12,param_13,param_14);
  uVar7 = 0;
  inlet_new(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1
            ,plVar1[7],0,0,param_13,param_14);
  *(undefined4 *)(plVar1 + 10) = 0xffffffff;
  uVar10 = extraout_RDX_00;
  uVar11 = extraout_XMM0_Qa_02;
  if (0 < (int)param_10) {
    uVar8 = (int)param_10 + 1;
    do {
      puVar4 = (undefined8 *)atom_getsymbol(param_11);
      puVar6 = gensym("hold");
      if (puVar6 == puVar4) {
        uVar9 = 1;
        uVar10 = extraout_RDX_01;
        uVar11 = extraout_XMM0_Qa_03;
LAB_0051ac36:
        *(undefined4 *)(plVar1 + 10) = uVar9;
      }
      else {
        puVar6 = gensym("lin");
        uVar9 = 2;
        uVar10 = extraout_RDX_02;
        uVar11 = extraout_XMM0_Qa_04;
        if (puVar6 == puVar4) goto LAB_0051ac36;
        puVar6 = gensym("linear");
        uVar10 = extraout_RDX_03;
        uVar11 = extraout_XMM0_Qa_05;
        if (puVar6 == puVar4) goto LAB_0051ac36;
        puVar6 = gensym("pad");
        uVar10 = extraout_RDX_04;
        uVar11 = extraout_XMM0_Qa_06;
        if (puVar6 == puVar4) {
          uVar9 = 0;
          goto LAB_0051ac36;
        }
      }
      param_11 = param_11 + 4;
      uVar8 = uVar8 - 1;
    } while (1 < uVar8);
  }
  plVar2 = outlet_new(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,0,
                      uVar10,uVar7,param_13,param_14);
  plVar1[0xd] = (long)plVar2;
  return plVar1;
}


