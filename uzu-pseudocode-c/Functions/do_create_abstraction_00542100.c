// Function : do_create_abstraction
// Namespace: 
// Entry    : 00542100
// Prototype: undefined8 do_create_abstraction(undefined8 param_1, undefined8 param_2, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, undefined8 * param_9, int param_10, void * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00542100 - 005422c7


undefined8
do_create_abstraction
          (undefined8 param_1,undefined8 param_2,double param_3,double param_4,double param_5,
          double param_6,double param_7,undefined8 param_8,undefined8 *param_9,int param_10,
          void *param_11,undefined8 param_12,char *param_13,undefined8 param_14)

{
  char *pcVar1;
  long *plVar2;
  int __fd;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  char *pcVar9;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char **ppcVar10;
  undefined8 *puVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined1 in_stack_fffffffffffff7e8;
  char *local_810;
  char local_808 [1008];
  char local_418 [1008];
  
  uVar3 = pd_setloadingabstraction((long)param_9);
  pcVar1 = (char *)*param_9;
  if ((int)uVar3 == 0) {
    lVar5 = canvas_getcurrent(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8);
    lVar5 = glist_getcanvas(lVar5);
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar4 = *(long **)(*plVar4 + 0x128);
    uVar3 = pd_snprintf(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        local_418,1000,"%s/%s",pcVar1,pcVar1,param_14,in_stack_fffffffffffff7e8);
    pcVar9 = local_808;
    ppcVar10 = &local_810;
    puVar11 = (undefined8 *)0x3e8;
    __fd = canvas_open(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar5,pcVar1,
                       ".pd",pcVar9,ppcVar10,1000,0);
    if (__fd < 0) {
      pcVar9 = local_808;
      ppcVar10 = &local_810;
      puVar11 = (undefined8 *)0x3e8;
      __fd = canvas_open(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,lVar5,pcVar1,".pat",pcVar9,ppcVar10,1000,0);
      if (__fd < 0) {
        pcVar9 = local_808;
        ppcVar10 = &local_810;
        puVar11 = (undefined8 *)0x3e8;
        __fd = canvas_open(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,lVar5,local_418,".pd",pcVar9,ppcVar10,1000,0);
        if (__fd < 0) goto LAB_00542136;
      }
    }
    close(__fd);
    canvas_setargs(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   param_10,param_11);
    puVar6 = gensym(local_810);
    puVar7 = gensym(local_808);
    binbuf_evalfile(extraout_XMM0_Qa_04,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    puVar6,puVar7,extraout_RDX,pcVar9,(char *)ppcVar10,puVar11);
    plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
    plVar2 = *(long **)(*plVar8 + 0x128);
    if ((plVar2 == (long *)0x0) || (plVar4 == plVar2)) {
      *(long **)(*plVar8 + 0x128) = plVar4;
      uVar3 = extraout_XMM0_Qa_05;
    }
    else {
      uVar3 = canvas_popabstraction
                        (extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,plVar2,puVar7,extraout_RDX_00,pcVar9,(char *)ppcVar10,puVar11);
    }
    canvas_setargs(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,(void *)0x0);
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    uVar3 = *(undefined8 *)(*plVar4 + 0x58);
  }
  else {
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "%s: can\'t load abstraction within itself\n",pcVar1,param_12,param_13,param_14);
LAB_00542136:
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    *(undefined8 *)(*plVar4 + 0x58) = 0;
    uVar3 = 0;
  }
  return uVar3;
}


