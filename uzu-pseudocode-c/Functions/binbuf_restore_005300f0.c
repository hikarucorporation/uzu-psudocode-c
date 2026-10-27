// Function : binbuf_restore
// Namespace: 
// Entry    : 005300f0
// Prototype: undefined binbuf_restore(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int * param_9, int param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005300f0 - 00530382


void binbuf_restore(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   int *param_9,int param_10,int *param_11,undefined8 param_12,char *param_13,
                   undefined8 param_14)

{
  char *__s1;
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  char *pcVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined8 extraout_RDX;
  char *pcVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 local_41c;
  char local_418 [1000];
  
  lVar12 = (long)param_10 + (long)*param_9;
  uVar10 = (long)*param_9 * 0x10;
  pvVar5 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(void **)(param_9 + 2),uVar10,lVar12 * 0x10);
  if (pvVar5 == (void *)0x0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,0,"binbuf_restore: out of space",extraout_RDX,param_12,param_13,
             param_14);
    return;
  }
  *(void **)(param_9 + 2) = pvVar5;
  *param_9 = (int)lVar12;
  if (param_10 != 0) {
    puVar11 = (undefined8 *)((long)pvVar5 + uVar10);
    do {
      param_10 = param_10 + -1;
      if (*param_11 == 2) {
        __s1 = (char *)**(undefined8 **)(param_11 + 2);
        iVar4 = strcmp(__s1,";");
        if (iVar4 == 0) {
          *(undefined4 *)puVar11 = 4;
          *(undefined4 *)(puVar11 + 1) = 0;
        }
        else {
          iVar4 = strcmp(__s1,",");
          if (iVar4 == 0) {
            *(undefined4 *)puVar11 = 5;
            *(undefined4 *)(puVar11 + 1) = 0;
          }
          else {
            pcVar6 = strchr(__s1,0x5c);
            pcVar9 = __s1;
            if (pcVar6 == (char *)0x0) {
LAB_0053029e:
              pcVar6 = strchr(pcVar9,0x24);
              if ((pcVar6 == (char *)0x0) || (9 < (byte)(pcVar6[1] - 0x30U))) {
                *(undefined4 *)puVar11 = 2;
              }
              else {
LAB_005302b9:
                pcVar6 = pcVar9;
                if (*pcVar9 == '$') {
                  do {
                    cVar8 = pcVar6[1];
                    if (cVar8 == '\0') {
                      local_41c = 0;
                      __isoc99_sscanf(pcVar9 + 1,"%d",&local_41c);
                      *(undefined4 *)puVar11 = 8;
                      *(undefined4 *)(puVar11 + 1) = local_41c;
                      goto LAB_00530168;
                    }
                    pcVar6 = pcVar6 + 1;
                  } while (0xf5 < (byte)(cVar8 - 0x3aU));
                }
                *(undefined4 *)puVar11 = 9;
                if (pcVar9 != __s1) {
                  puVar7 = gensym(pcVar9);
                  goto LAB_00530304;
                }
              }
              puVar7 = *(undefined8 **)(param_11 + 2);
            }
            else {
              cVar8 = *__s1;
              if (cVar8 != '\0') {
                bVar2 = false;
                bVar3 = false;
                pcVar9 = local_418;
                pcVar6 = __s1;
                do {
                  pcVar6 = pcVar6 + 1;
                  if (bVar2) {
LAB_00530210:
                    *pcVar9 = cVar8;
                    pcVar9 = pcVar9 + 1;
                    bVar2 = false;
                    cVar8 = *pcVar6;
                  }
                  else {
                    if (cVar8 != '\\') {
                      if ((cVar8 == '$') && ((byte)(*pcVar6 - 0x30U) < 10)) {
                        bVar3 = true;
                      }
                      goto LAB_00530210;
                    }
                    bVar2 = true;
                    cVar8 = *pcVar6;
                  }
                } while ((cVar8 != '\0') && (pcVar9 < local_418 + 999));
                *pcVar9 = '\0';
                pcVar9 = local_418;
                if (!bVar3) goto joined_r0x0053029c;
                goto LAB_005302b9;
              }
              local_418[0] = '\0';
joined_r0x0053029c:
              pcVar9 = local_418;
              if (pcVar9 == __s1) goto LAB_0053029e;
              *(undefined4 *)puVar11 = 2;
              puVar7 = gensym(local_418);
            }
LAB_00530304:
            puVar11[1] = puVar7;
          }
        }
      }
      else {
        uVar1 = *(undefined8 *)(param_11 + 2);
        *puVar11 = *(undefined8 *)param_11;
        puVar11[1] = uVar1;
      }
LAB_00530168:
      param_11 = param_11 + 4;
      puVar11 = puVar11 + 2;
    } while (param_10 != 0);
  }
  return;
}


