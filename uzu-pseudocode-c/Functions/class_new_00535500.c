// Function : class_new
// Namespace: 
// Entry    : 00535500
// Prototype: undefined8 * class_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int * param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, uint param_15, uint param_16)
// Body     : 00535500 - 00535a37


/* WARNING: Removing unreachable block (ram,0x005355c1) */
/* WARNING: Removing unreachable block (ram,0x005355e5) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000010 : 0x005356ba */
/* WARNING: Removing unreachable block (ram,0x00535608) */
/* WARNING: Removing unreachable block (ram,0x0053562c) */
/* WARNING: Removing unreachable block (ram,0x00535650) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 *
class_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
         undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,int *param_9,
         long param_10,undefined8 param_11,undefined8 param_12,char *param_13,undefined8 param_14,
         uint param_15,uint param_16)

{
  long *plVar1;
  char *__s;
  char *__s_00;
  int *piVar2;
  char in_AL;
  long *plVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  int in_stack_00000018;
  int in_stack_00000020;
  int in_stack_00000028;
  uint local_148;
  uint local_144;
  int local_140;
  undefined1 local_e8 [48];
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  
  uVar15 = (undefined4)param_1;
  if (in_AL != '\0') {
    local_b8 = param_1;
    local_a8 = param_2;
    local_98 = param_3;
    local_88 = param_4;
    local_78 = param_5;
    local_68 = param_6;
    local_58 = param_7;
    local_48 = param_8;
  }
  uVar13 = 3;
  if (((ulong)param_13 & 3) != 0) {
    uVar13 = (uint)param_13 & 3;
  }
  local_140 = (int)local_e8;
  iVar12 = (int)param_14;
  puVar6 = (undefined8 *)PTR_pd_objectmaker_00715510;
  if (iVar12 == 0) {
    local_140 = 0x30;
  }
  else if (param_15 == 0) {
    local_144 = 0;
  }
  else {
    local_144 = param_15;
    if (param_16 == 0) {
      local_148 = 0;
    }
    else {
      local_148 = param_16;
      if (in_stack_00000018 == 0) {
        local_140 = 0;
      }
      else {
        local_140 = in_stack_00000018;
        if ((in_stack_00000020 != 0) && (in_stack_00000028 != 0)) {
          if (param_9 == (int *)0x0) {
            uVar15 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                              "unnamed class: sorry: only %d args typechecked; use A_GIMME",5,
                              param_12,param_13,param_14);
            puVar6 = (undefined8 *)PTR_pd_objectmaker_00715510;
          }
          else {
            uVar15 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                              "class %s: sorry: only %d args typechecked; use A_GIMME",
                              *(undefined8 *)param_9,5,param_13,param_14);
            puVar6 = (undefined8 *)PTR_pd_objectmaker_00715510;
          }
        }
      }
    }
  }
  PTR_pd_objectmaker_00715510 = (undefined *)puVar6;
  if ((((param_10 != 0) && ((long *)*puVar6 != (long *)0x0)) &&
      (class_addmethod(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       (long *)*puVar6,param_10,param_9,iVar12,(char *)(ulong)local_144,
                       (ulong)local_148,local_140), piVar2 = class_loadsym, param_9 != (int *)0x0))
     && (class_loadsym != (int *)0x0)) {
    plVar1 = (long *)*puVar6;
    iVar11 = (int)plVar1[5];
    if (iVar11 != 0) {
      lVar10 = plVar1[4];
      plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
      plVar3 = (long *)(*(long *)(lVar10 + (long)*(int *)(*plVar3 + 0x20) * 8) + 8);
      do {
        if ((int *)plVar3[-1] == piVar2) {
          if (*plVar3 != 0) goto LAB_005358ad;
          break;
        }
        iVar11 = iVar11 + -1;
        plVar3 = plVar3 + 3;
      } while (iVar11 != 0);
    }
    __s = *(char **)piVar2;
    __s_00 = *(char **)param_9;
    sVar4 = strlen(__s_00);
    sVar5 = strlen(__s);
    if ((sVar4 <= sVar5 && sVar5 - sVar4 != 0) &&
       (iVar11 = strcmp(__s_00,__s + (sVar5 - sVar4)), iVar11 == 0)) {
      class_addmethod(extraout_XMM0_Da,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      plVar1,param_10,piVar2,iVar12,(char *)(ulong)local_144,(ulong)local_148,
                      local_140);
    }
  }
LAB_005358ad:
  puVar6 = getbytes(0xa0);
  puVar6[1] = param_9;
  *puVar6 = param_9;
  puVar6[3] = param_12;
  *(undefined4 *)(puVar6 + 5) = 0;
  puVar6[6] = param_11;
  puVar6[7] = pd_defaultbang;
  puVar6[8] = pd_defaultpointer;
  puVar6[9] = pd_defaultfloat;
  puVar6[10] = pd_defaultsymbol;
  puVar6[0xb] = pd_defaultlist;
  puVar6[0xc] = pd_defaultanything;
  bVar14 = uVar13 == 3;
  puVar8 = (undefined *)0x0;
  if (bVar14) {
    puVar8 = PTR_text_widgetbehavior_00715630;
  }
  puVar6[0xd] = puVar8;
  pcVar9 = class_nosavefn;
  if (bVar14) {
    pcVar9 = (code *)PTR_text_save_00715e38;
  }
  puVar6[0xe] = 0;
  *(byte *)((long)puVar6 + 0x94) =
       ((byte)param_13 & 0x70 | (byte)param_13 >> 1 & 4 | bVar14 * '\x02' | 1 < uVar13 |
       *(byte *)((long)puVar6 + 0x94) & 0x80) ^ 4;
  *(undefined4 *)(puVar6 + 0x12) = 0;
  puVar6[2] = class_extern_dir;
  puVar6[0xf] = pcVar9;
  puVar6[0x13] = 0;
  puVar8 = PTR_pd_ninstances_00715d50;
  pvVar7 = getbytes((long)*(int *)PTR_pd_ninstances_00715d50 << 3);
  puVar6[4] = pvVar7;
  if (0 < *(int *)puVar8) {
    lVar10 = 0;
    do {
      pvVar7 = getbytes(0);
      *(void **)(puVar6[4] + lVar10 * 8) = pvVar7;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)puVar8);
  }
  puVar6[0x11] = class_list;
  class_list = puVar6;
  return puVar6;
}


