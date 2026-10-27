// Function : ugen_connect
// Namespace: 
// Entry    : 004f6f00
// Prototype: undefined ugen_connect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 * param_10, uint param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 004f6f00 - 004f70ce


void ugen_connect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,undefined8 *param_10,uint param_11,long *param_12,char *param_13,
                 undefined8 param_14)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long *plVar10;
  char *pcVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qa_01;
  
  plVar9 = param_12;
  pcVar13 = param_13;
  uVar4 = obj_sigoutletindex((long)param_10,param_11);
  uVar5 = obj_siginletindex(param_12,(int)param_13);
  plVar6 = (long *)__tls_get_addr();
  uVar7 = extraout_RDX;
  uVar15 = extraout_XMM0_Qa;
  if (*(int *)(*(long *)(*plVar6 + 0x40) + 0x134) != 0) {
    class_getname((undefined8 *)*param_10);
    class_getname((undefined8 *)*param_12);
    plVar9 = (long *)(ulong)param_11;
    pcVar13 = (char *)((ulong)param_13 & 0xffffffff);
    uVar15 = post(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  "%s -> %s: %d->%d");
    uVar7 = extraout_RDX_00;
  }
  plVar6 = (long *)*param_9;
  if (plVar6 != (long *)0x0) {
    plVar10 = plVar6;
    do {
      puVar8 = (undefined8 *)plVar10[5];
      if (puVar8 == param_10) goto LAB_004f6fca;
      plVar10 = (long *)plVar10[4];
    } while (plVar10 != (long *)0x0);
    plVar10 = (long *)0x0;
LAB_004f6fca:
    do {
      if (plVar6 == (long *)0x0) goto LAB_004f6fcf;
      if ((long *)plVar6[5] == param_12) {
        if ((puVar8 == param_10) && (-1 < (int)uVar5)) {
          uVar2 = *(uint *)(plVar6 + 1);
          plVar9 = (long *)(ulong)uVar2;
          if (uVar2 != 0) {
            if ((((int)uVar4 < 0) || ((int)plVar10[3] <= (int)uVar4)) || ((int)uVar2 <= (int)uVar5))
            {
              uVar7 = class_getname((undefined8 *)*param_10);
              uVar15 = class_getname((undefined8 *)*param_12);
              bug(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  "ugen_connect %s %s %d %d (%d %d)",uVar7,uVar15,(ulong)uVar4,(char *)(ulong)uVar5,
                  (ulong)*(uint *)(plVar10 + 3),(char)plVar6[1]);
            }
            lVar12 = plVar10[2];
            lVar14 = (long)(int)uVar4;
            lVar3 = *plVar6;
            puVar8 = getbytes(0x18);
            puVar8[2] = *(undefined8 *)(lVar12 + 0x10 + lVar14 * 0x18);
            *(undefined8 **)(lVar12 + 0x10 + lVar14 * 0x18) = puVar8;
            *puVar8 = plVar6;
            *(uint *)(puVar8 + 1) = uVar5;
            piVar1 = (int *)(lVar12 + lVar14 * 0x18);
            *piVar1 = *piVar1 + 1;
            piVar1 = (int *)(lVar3 + (ulong)uVar5 * 0x10);
            *piVar1 = *piVar1 + 1;
            return;
          }
        }
        goto LAB_004f6fcf;
      }
      plVar6 = (long *)plVar6[4];
    } while( true );
  }
LAB_004f6fd4:
  pcVar11 = "object with signal outlets but no DSP method?";
  lVar12 = 0;
LAB_004f6fdd:
  pd_error(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar12,pcVar11,uVar7,
           plVar9,pcVar13,param_14);
  return;
LAB_004f6fcf:
  if (puVar8 == param_10) {
    if ((param_12 != (long *)0x0) &&
       (plVar9 = (long *)PTR_text_class_00715c88, *param_12 == *(long *)PTR_text_class_00715c88)) {
      return;
    }
    lVar12 = plVar10[5];
    pcVar11 = "audio signal outlet connected to nonsignal inlet (ignored)";
    goto LAB_004f6fdd;
  }
  goto LAB_004f6fd4;
}


