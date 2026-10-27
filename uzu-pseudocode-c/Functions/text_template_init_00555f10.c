// Function : text_template_init
// Namespace: 
// Entry    : 00555f10
// Prototype: undefined text_template_init(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00555f10 - 00555fd2


void text_template_init(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  size_t sVar5;
  long *plVar6;
  double unaff_RBX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qa_00;
  
  puVar2 = binbuf_new();
  puVar3 = gensym("_text_template");
  puVar4 = gensym(".");
  glob_setfilename(0,puVar3,puVar4);
  sVar5 = strlen(text_templatefile);
  uVar7 = binbuf_text(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      puVar2,(byte *)text_templatefile,sVar5);
  binbuf_eval(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar2,
              (uint *)PTR_pd_canvasmaker_00715c00,0,0,in_R8,in_R9);
  plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *(long *)(*plVar6 + 0x128);
  puVar3 = gensym("pop");
  pd_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar1,puVar3,
           0x65522c,0,in_R8,in_R9,unaff_RBX);
  glob_setfilename(0,*plVar6 + 0x168,*plVar6 + 0x168);
  binbuf_free(puVar2);
  return;
}


