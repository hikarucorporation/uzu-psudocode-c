// Function : sigbp_new
// Namespace: 
// Entry    : 00593860
// Prototype: long * sigbp_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00593860 - 00593a18


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * sigbp_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  double dVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 extraout_RDX;
  float fVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = (float)param_2;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_sigbp_class_00715800,param_10,param_11,param_12,param_13,param_14);
  puVar3 = gensym("float");
  puVar4 = gensym("ft1");
  inlet_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
            (long)plVar2,(long)puVar3,(long)puVar4,param_13,param_14);
  puVar3 = gensym("float");
  puVar4 = gensym("ft2");
  inlet_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2
            ,(long)plVar2,(long)puVar3,(long)puVar4,param_13,param_14);
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             (long)plVar2,*plVar5 + 0xf0,extraout_RDX,puVar4,param_13,param_14);
  *(undefined4 *)(plVar2 + 6) = 0x472c4400;
  *(undefined8 *)((long)plVar2 + 0x3c) = 0;
  dVar1 = DAT_00651e50;
  fVar9 = (float)param_1;
  if ((double)(float)param_1 < DAT_00651e50) {
    fVar9 = DAT_0065260c;
  }
  fVar8 = 0.0;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  *(float *)((long)plVar2 + 0x34) = fVar9;
  *(float *)(plVar2 + 7) = fVar7;
  fVar9 = fVar9 * _DAT_0065d808;
  fVar6 = DAT_005d9038;
  if (dVar1 <= (double)fVar7) {
    fVar6 = fVar9 / fVar7;
  }
  if (DAT_005d9038 <= fVar6) {
    fVar6 = DAT_005d9038;
  }
  fVar7 = DAT_005d9038 - fVar6;
  if ((_DAT_0065d80c <= fVar9) && (fVar9 <= _DAT_0065d810)) {
    fVar8 = fVar9 * fVar9;
    fVar8 = (float)((double)fVar8 * DAT_00652be8 + _DAT_005d9000 +
                   (double)((fVar8 * _DAT_0065d814 + _DAT_0065d818) * fVar8 * fVar8));
    fVar8 = fVar8 + fVar8;
  }
  *(float *)((long)plVar2 + 0x44) = fVar8 * fVar7;
  *(float *)(plVar2 + 9) = (float)(_DAT_006524b0 ^ (uint)fVar7) * fVar7;
  fVar9 = fVar9 * fVar7 + fVar6;
  *(float *)((long)plVar2 + 0x4c) = (fVar9 + fVar9) * fVar6;
  *(undefined4 *)(plVar2 + 10) = 0;
  return plVar2;
}


