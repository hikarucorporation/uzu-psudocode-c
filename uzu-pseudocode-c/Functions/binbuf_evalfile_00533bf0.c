// Function : binbuf_evalfile
// Namespace: 
// Entry    : 00533bf0
// Prototype: undefined binbuf_evalfile(undefined8 param_1, undefined8 param_2, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, undefined8 * param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 * param_14)
// Body     : 00533bf0 - 00533e05


void binbuf_evalfile(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                    double param_5,double param_6,double param_7,undefined8 param_8,
                    undefined8 *param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12
                    ,char *param_13,undefined8 *param_14)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  void *pvVar5;
  size_t sVar6;
  int *piVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long lVar11;
  undefined8 extraout_RDX_01;
  char *pcVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar17;
  
  puVar4 = getbytes(0x10);
  *puVar4 = 0;
  pvVar5 = getbytes(0);
  *(void **)(puVar4 + 2) = pvVar5;
  pcVar12 = (char *)*param_9;
  sVar6 = strlen(pcVar12);
  pcVar12 = pcVar12 + (sVar6 - 4);
  iVar2 = strcmp(pcVar12,".pat");
  if (iVar2 == 0) {
    bVar14 = true;
    uVar15 = extraout_XMM0_Qa;
  }
  else {
    iVar2 = strcmp(pcVar12,".mxt");
    bVar14 = iVar2 == 0;
    uVar15 = extraout_XMM0_Qa_00;
  }
  uVar3 = canvas_suspend_dsp(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar15 = glob_setfilename(0,param_9,param_10);
  uVar15 = binbuf_read(uVar15,param_2,(long)param_3,(long)param_4,(long)param_5,param_6,param_7,
                       param_8,puVar4,(char *)*param_9,(char *)*param_10,0,param_13,param_14);
  puVar10 = puVar4;
  if ((int)uVar15 == 0) {
    puVar9 = gensym("#A");
    uVar15 = puVar9[1];
    plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
    uVar17 = *(undefined8 *)(*plVar8 + 0x110);
    puVar9 = gensym("#A");
    puVar9[1] = 0;
    puVar1 = PTR_pd_canvasmaker_00715c00;
    *(undefined **)(*plVar8 + 0x110) = PTR_pd_canvasmaker_00715c00;
    uVar16 = extraout_XMM0_Qa_02;
    if (bVar14) {
      puVar10 = (uint *)binbuf_convert(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,
                                       param_7,param_8,puVar4,1,extraout_RDX,puVar1,param_13,
                                       param_14);
      freebytes(*(void **)(puVar4 + 2));
      uVar16 = freebytes(puVar4);
    }
    uVar13 = 0;
    pcVar12 = (char *)0x0;
    binbuf_eval(uVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar10,(uint *)0x0,0
                ,0,param_13,param_14);
    plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar8 = *(long **)(*plVar8 + 0x128);
    if ((plVar8 != (long *)0x0) &&
       (pcVar12 = PTR_canvas_class_00715918, *plVar8 == *(long *)PTR_canvas_class_00715918)) {
      canvas_initbang(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long)plVar8,uVar13,extraout_RDX_00,PTR_canvas_class_00715918,param_13,
                      param_14);
    }
    puVar9 = gensym("#A");
    puVar9[1] = uVar15;
    plVar8 = (long *)__tls_get_addr();
    lVar11 = *plVar8;
    *(undefined8 *)(lVar11 + 0x110) = uVar17;
  }
  else {
    uVar15 = *param_9;
    piVar7 = __errno_location();
    pcVar12 = strerror(*piVar7);
    pd_error(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "%s: read failed; %s",uVar15,pcVar12,param_13,param_14);
    plVar8 = (long *)__tls_get_addr();
    lVar11 = *plVar8;
  }
  glob_setfilename(0,lVar11 + 0x168,lVar11 + 0x168);
  freebytes(*(void **)(puVar10 + 2));
  uVar15 = 0x10;
  uVar17 = freebytes(puVar10);
  canvas_resume_dsp(uVar17,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(ulong)uVar3,
                    uVar15,extraout_RDX_01,pcVar12,param_13,param_14);
  return;
}


