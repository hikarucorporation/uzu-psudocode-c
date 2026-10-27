// Function : file_mkdir_symbol
// Namespace: 
// Entry    : 0057c2b0
// Prototype: undefined file_mkdir_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0057c2b0 - 0057c4bf


void file_mkdir_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  char *pcVar1;
  char cVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  undefined7 extraout_var;
  int *piVar7;
  char *pcVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar9;
  stat sStack_4a8;
  char local_418 [999];
  undefined1 local_31;
  
  pcVar6 = local_418;
  do_expandpath((char *)*param_10,pcVar6,1000);
  local_31 = 0;
  sys_unbashfilename(pcVar6,pcVar6);
  pcVar8 = pcVar6;
  do {
    while( true ) {
      cVar2 = *pcVar6;
      *pcVar8 = cVar2;
      pcVar8 = pcVar8 + 1;
      if (cVar2 != '/') break;
      do {
        pcVar1 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
      } while (*pcVar1 == '/');
    }
    pcVar6 = pcVar6 + 1;
  } while (cVar2 != '\0');
  bVar4 = sys_isabsolutepath(local_418);
  pcVar6 = local_418;
  if ((int)CONCAT71(extraout_var,bVar4) != 0) {
    pcVar6 = strchr(local_418,0x2f);
    if (pcVar6 == (char *)0x0) {
      pcVar6 = local_418;
    }
  }
  if (pcVar6[1] != '\0') {
    pcVar6 = pcVar6 + 1;
    if (param_9 == 0) {
      do {
        pcVar8 = strchr(pcVar6,0x2f);
        if (pcVar8 != (char *)0x0) {
          *pcVar8 = '\0';
        }
        iVar5 = stat(local_418,&sStack_4a8);
        if (((iVar5 != 0) || ((sStack_4a8.st_mode & 0xf000) != 0x4000)) &&
           (iVar5 = mkdir(local_418,0x1ff), iVar5 != 0)) goto LAB_0057c48d;
        if (pcVar8 == (char *)0x0) break;
        *pcVar8 = '/';
        pcVar6 = pcVar8 + 1;
      } while (pcVar8[1] != '\0');
    }
    else {
      do {
        pcVar8 = strchr(pcVar6,0x2f);
        if (pcVar8 != (char *)0x0) {
          *pcVar8 = '\0';
        }
        iVar5 = stat(local_418,&sStack_4a8);
        if (((iVar5 != 0) || ((sStack_4a8.st_mode & 0xf000) != 0x4000)) &&
           (iVar5 = mkdir(local_418,*(__mode_t *)(param_9 + 0x48)), iVar5 != 0)) {
LAB_0057c48d:
          piVar7 = __errno_location();
          pcVar6 = strerror(*piVar7);
          uVar9 = pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,param_9,"failed to create \'%s\': %s",local_418,pcVar6,param_13,
                           param_14);
          outlet_bang(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      *(long **)(param_9 + 0x60));
          return;
        }
        if (pcVar8 == (char *)0x0) break;
        *pcVar8 = '/';
        pcVar6 = pcVar8 + 1;
      } while (pcVar8[1] != '\0');
    }
  }
  plVar3 = *(long **)(param_9 + 0x58);
  gensym(local_418);
  outlet_symbol(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3);
  return;
}


