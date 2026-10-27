// Function : garray_init
// Namespace: 
// Entry    : 004f98d0
// Prototype: undefined garray_init(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 004f98d0 - 004f9a18


void garray_init(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  double in_RAX;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  puVar2 = binbuf_new();
  puVar3 = gensym("_float_template");
  puVar4 = gensym(".");
  uVar6 = glob_setfilename(0,puVar3,puVar4);
  uVar6 = binbuf_text(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar2,
                      (byte *)"canvas 0 0 458 153 10;\n#X obj 39 26 struct float float y;\n",0x3a);
  binbuf_eval(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar2,
              (uint *)PTR_pd_canvasmaker_00715c00,0,0,in_R8,in_R9);
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *(long *)(*plVar5 + 0x128);
  puVar3 = gensym("pop");
  pd_vmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar1,puVar3,
           0x65522c,0,in_R8,in_R9,in_RAX);
  puVar3 = gensym("_float_array_template");
  puVar4 = gensym(".");
  uVar6 = glob_setfilename(0,puVar3,puVar4);
  uVar6 = binbuf_text(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar2,
                      (byte *)
                      "canvas 0 0 458 153 10;\n#X obj 43 31 struct float-array array z float float style\nfloat linewidth float color float v;\n#X obj 43 70 plot -v v z color linewidth 0 0 1 style;\n"
                      ,0xac);
  binbuf_eval(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar2,
              (uint *)PTR_pd_canvasmaker_00715c00,0,0,in_R8,in_R9);
  lVar1 = *(long *)(*plVar5 + 0x128);
  garray_arraytemplatecanvas = lVar1;
  puVar3 = gensym("pop");
  pd_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar1,puVar3,
           0x65522c,0,in_R8,in_R9,in_RAX);
  glob_setfilename(0,*plVar5 + 0x168,*plVar5 + 0x168);
  binbuf_free(puVar2);
  return;
}


