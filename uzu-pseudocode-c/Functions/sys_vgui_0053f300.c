// Function : sys_vgui
// Namespace: 
// Entry    : 0053f300
// Prototype: undefined sys_vgui(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9)
// Body     : 0053f300 - 0053f669


void sys_vgui(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             char *param_9)

{
  FILE *param0;
  uint uVar1;
  uint uVar2;
  long *plVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 extraout_RDX;
  undefined *puVar8;
  size_t __maxlen;
  char *__format;
  char *in_R8;
  undefined8 in_R9;
  long lVar9;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_178 [128];
  undefined1 uVar10;
  
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar9 = *(long *)(*plVar3 + 0x38);
  if ((*(byte *)(lVar9 + 0x48) & 1) == 0) {
    vfprintf(*(FILE **)PTR_stderr_00715948,param_9,auStack_178 + 0x80);
  }
  else {
    if (*(long *)(lVar9 + 0x30) == 0) {
      pvVar4 = malloc(0x2000);
      *(void **)(lVar9 + 0x30) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        fwrite("Pd: couldn\'t allocate GUI buffer\n",0x21,1,*(FILE **)PTR_stderr_00715948);
        if (sys_bail_reentered == '\0') {
          sys_bail_reentered = 1;
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
                    /* WARNING: Subroutine does not return */
        _exit(1);
      }
      *(undefined4 *)(lVar9 + 0x40) = 0x2000;
      *(undefined8 *)(lVar9 + 0x38) = 0;
    }
    else if (*(int *)(lVar9 + 0x40) + -0x1000 < *(int *)(lVar9 + 0x38)) {
      sys_trytogetmoreguibuf(*(int *)(lVar9 + 0x40) + 0x2000);
    }
    puVar7 = auStack_178 + 0x80;
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar9 = *(long *)(*plVar3 + 0x38);
    uVar1 = pd_vsnprintf((char *)(*(long *)(lVar9 + 0x30) + (long)*(int *)(lVar9 + 0x38)),
                         (long)*(int *)(lVar9 + 0x40) - (long)*(int *)(lVar9 + 0x38),param_9,
                         auStack_178 + 0x80);
    if ((int)uVar1 < 0) {
      param0 = *(FILE **)PTR_stderr_00715948;
      piVar5 = __errno_location();
      fprintf(param0,"sys_vgui: pd_snprintf() failed with error code %d\n",*piVar5);
    }
    else {
      plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar9 = *(long *)(*plVar3 + 0x38);
      iVar6 = *(int *)(lVar9 + 0x38);
      if (*(int *)(lVar9 + 0x40) - iVar6 <= (int)uVar1) {
        iVar6 = 0x2000;
        if (0x1fff < uVar1) {
          iVar6 = uVar1 + 1;
        }
        sys_trytogetmoreguibuf(*(int *)(lVar9 + 0x40) + iVar6);
        uVar10 = 8;
        plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar9 = *(long *)(*plVar3 + 0x38);
        __maxlen = (long)*(int *)(lVar9 + 0x40) - (long)*(int *)(lVar9 + 0x38);
        uVar2 = pd_vsnprintf((char *)(*(long *)(lVar9 + 0x30) + (long)*(int *)(lVar9 + 0x38)),
                             __maxlen,param_9,auStack_178 + 0x80);
        if (uVar2 != uVar1) {
          bug(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"sys_vgui",
              __maxlen,extraout_RDX,puVar7,in_R8,in_R9,uVar10);
        }
        plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar9 = *(long *)(*plVar3 + 0x38);
        iVar6 = *(int *)(lVar9 + 0x38);
        uVar2 = *(int *)(lVar9 + 0x40) - iVar6;
        if ((int)uVar1 < (int)uVar2) {
          uVar2 = uVar1;
        }
        uVar1 = uVar2;
      }
      if ((*(uint *)PTR_sys_debuglevel_007154a8 & 1) != 0) {
        lVar9 = (long)iVar6 + *(long *)(lVar9 + 0x30);
        puVar8 = &DAT_006570ac;
        if (sys_vgui_newmess == 0) {
          puVar8 = &DAT_005e2ee7;
        }
        __format = "\x1b[0;1;35m%s%s\x1b[0m";
        if ((*(uint *)PTR_sys_debuglevel_007154a8 & 4) == 0) {
          __format = "%s%s";
        }
        if (stderr_isatty == 0) {
          __format = "%s%s";
        }
        fprintf(*(FILE **)PTR_stderr_00715948,__format,puVar8,lVar9);
        sys_vgui_newmess = (uint)(*(char *)((long)(int)uVar1 + -1 + lVar9) == '\n');
        plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar9 = *(long *)(*plVar3 + 0x38);
        iVar6 = *(int *)(lVar9 + 0x38);
      }
      *(uint *)(lVar9 + 0x38) = iVar6 + uVar1;
      *(int *)(lVar9 + 0x44) = *(int *)(lVar9 + 0x44) + uVar1;
    }
  }
  return;
}


