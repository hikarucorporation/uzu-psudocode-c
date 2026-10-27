// Function : helmholtz_new
// Namespace: 
// Entry    : 00572960
// Prototype: long * helmholtz_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00572960 - 00572a44


/* WARNING: Unknown calling convention: __cdecl */
/* helmholtz_new(float, float) */

long * __cdecl
helmholtz_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             char *param_13,undefined8 param_14)

{
  float fVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  Helmholtz *this;
  long lVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  fVar1 = (float)param_2;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_helmholtz_class_00715488,param_10,param_11,param_12,param_13,param_14
                 );
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,(long)plVar2,*plVar3 + 0xf0,extraout_RDX,param_12,param_13,param_14);
  plVar4 = outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long)plVar2,*plVar3 + 0x78,extraout_RDX_00,
                      param_12,param_13,param_14);
  plVar2[8] = (long)plVar4;
  plVar3 = outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long)plVar2,*plVar3 + 0x78,extraout_RDX_01,
                      param_12,param_13,param_14);
  plVar2[9] = (long)plVar3;
  this = operator_new(0x38);
                    /* try { // try from 005729d7 to 005729f0 has its CatchHandler @ 00572a45 */
  Helmholtz::Helmholtz(DAT_005d9070,this,0x400,1);
  plVar2[0xd] = (long)this;
  Helmholtz::setframesize(this,(int)(float)param_1);
  Helmholtz::setoverlap((Helmholtz *)plVar2[0xd],(int)fVar1);
  plVar2[10] = 0;
  *(undefined4 *)(plVar2 + 0xb) = 0x3f733333;
  *(undefined4 *)(plVar2 + 0xc) = 0x447a0000;
  lVar5 = clock_new(plVar2,helmholtz_tick);
  plVar2[7] = lVar5;
  return plVar2;
}


