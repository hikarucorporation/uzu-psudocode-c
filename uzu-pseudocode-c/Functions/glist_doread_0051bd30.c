// Function : glist_doread
// Namespace: 
// Entry    : 0051bd30
// Prototype: undefined glist_doread(undefined8 param_1, undefined8 param_2, long param_3, long param_4, long param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 * param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined * param_14)
// Body     : 0051bd30 - 0051be3e


void glist_doread(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,long *param_9,
                 undefined8 *param_10,undefined8 *param_11,undefined8 param_12,char *param_13,
                 undefined *param_14)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  long *plVar5;
  undefined7 extraout_var;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  char *pcVar8;
  uint *puVar9;
  long *plVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar11;
  undefined4 extraout_XMM0_Db_00;
  undefined1 in_stack_ffffffffffffffb8;
  
  uVar6 = param_12;
  puVar4 = binbuf_new();
  plVar5 = (long *)glist_getcanvas((long)param_9);
  uVar2 = glist_isvisible((long)plVar5);
  pcVar8 = (char *)*param_11;
  iVar3 = strcmp(pcVar8,"cr");
  uVar11 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  if (iVar3 == 0) {
    plVar10 = (long *)0x1;
  }
  else if (*pcVar8 == '\0') {
    plVar10 = (long *)0x0;
    uVar11 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  }
  else {
    plVar10 = (long *)0x0;
    uVar11 = pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,0,"qlist_read: unknown flag: %s",pcVar8,uVar6,param_13
                      ,param_14);
  }
  pcVar8 = (char *)*param_10;
  bVar1 = binbuf_read_via_canvas
                    (uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar4,pcVar8,
                     (long)plVar5,(int)plVar10);
  uVar11 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    uVar6 = extraout_RDX;
    if (uVar2 != 0) {
      uVar11 = canvas_vis(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5,pcVar8,
                          extraout_RDX,(undefined *)plVar10,param_13,param_14,
                          in_stack_ffffffffffffffb8);
      uVar6 = extraout_RDX_00;
    }
    if ((int)param_12 != 0) {
      uVar11 = glist_clear(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           pcVar8,uVar6,plVar10,param_13,param_14);
    }
    puVar7 = (undefined *)0x0;
    puVar9 = puVar4;
    glist_readfrombinbuf
              (uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,puVar4,
               *param_10,(char *)0x0,param_13,param_14);
    if (uVar2 != 0) {
      canvas_vis((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5,
                 (char *)puVar9,extraout_RDX_01,puVar7,param_13,param_14,in_stack_ffffffffffffffb8);
    }
  }
  else {
    pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)param_9,"read failed",extraout_RDX,plVar10,param_13,
             param_14);
  }
  binbuf_free(puVar4);
  return;
}


