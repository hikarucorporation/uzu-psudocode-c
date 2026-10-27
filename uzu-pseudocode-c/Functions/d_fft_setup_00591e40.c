// Function : d_fft_setup
// Namespace: 
// Entry    : 00591e40
// Prototype: undefined d_fft_setup(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 00591e40 - 0059212e


void d_fft_setup(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint in_EAX;
  int *piVar2;
  undefined8 *puVar3;
  uint unaff_EBX;
  undefined8 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar5;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  
  piVar2 = (int *)gensym("fft~");
  uVar4 = 0;
  sigfft_class = class_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,piVar2,0x592130,0,0x38,(char *)0x10,0,
                           in_EAX,unaff_EBX);
  uVar5 = class_setfreefn((long)sigfft_class,fftclass_cleanup);
  class_domainsignalin
            (uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)sigfft_class,0x30);
  plVar1 = sigfft_class;
  piVar2 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x5921c0,piVar2,0xb,(char *)0x0,uVar4,in_EAX);
  mayer_init();
  piVar2 = (int *)gensym("ifft~");
  uVar4 = 0;
  sigifft_class =
       class_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0x5921d0,0,0x38,(char *)0x10,0,in_EAX,unaff_EBX);
  uVar5 = class_setfreefn((long)sigifft_class,fftclass_cleanup);
  class_domainsignalin
            (uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)sigifft_class,0x30)
  ;
  plVar1 = sigifft_class;
  piVar2 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x592250,piVar2,0xb,(char *)0x0,uVar4,in_EAX);
  plVar1 = sigifft_class;
  puVar3 = gensym("fft~");
  class_sethelpsymbol((long)plVar1,puVar3);
  mayer_init();
  piVar2 = (int *)gensym("rfft~");
  uVar4 = 0;
  sigrfft_class =
       class_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0x5926d0,0,0x38,(char *)0x10,0,in_EAX,unaff_EBX);
  uVar5 = class_setfreefn((long)sigrfft_class,fftclass_cleanup);
  class_domainsignalin
            (uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)sigrfft_class,0x30)
  ;
  plVar1 = sigrfft_class;
  piVar2 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x592730,piVar2,0xb,(char *)0x0,uVar4,in_EAX);
  plVar1 = sigrfft_class;
  puVar3 = gensym("fft~");
  class_sethelpsymbol((long)plVar1,puVar3);
  mayer_init();
  piVar2 = (int *)gensym("rifft~");
  uVar4 = 0;
  sigrifft_class =
       class_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0x592bc0,0,0x38,(char *)0x10,0,in_EAX,unaff_EBX);
  uVar5 = class_setfreefn((long)sigrifft_class,fftclass_cleanup);
  class_domainsignalin
            (uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)sigrifft_class,0x30
            );
  plVar1 = sigrifft_class;
  piVar2 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x592c20,piVar2,0xb,(char *)0x0,uVar4,in_EAX);
  plVar1 = sigrifft_class;
  puVar3 = gensym("fft~");
  class_sethelpsymbol((long)plVar1,puVar3);
  mayer_init();
  piVar2 = (int *)gensym("framp~");
  uVar4 = 0;
  sigframp_class =
       class_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_07),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,piVar2,0x592e40,0,0x38,(char *)0x0,0,in_EAX,unaff_EBX);
  uVar5 = class_setfreefn((long)sigframp_class,fftclass_cleanup);
  class_domainsignalin
            (uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)sigframp_class,0x30
            );
  plVar1 = sigframp_class;
  piVar2 = (int *)gensym("dsp");
  class_addmethod(extraout_XMM0_Da_08,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1
                  ,0x592ed0,piVar2,0xb,(char *)0x0,uVar4,in_EAX);
  mayer_init();
  return;
}


