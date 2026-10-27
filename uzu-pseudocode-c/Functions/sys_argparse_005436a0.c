// Function : sys_argparse
// Namespace: 
// Entry    : 005436a0
// Prototype: undefined8 sys_argparse(uint param_1, long * param_2)
// Body     : 005436a0 - 00544ed9


/* WARNING: Type propagation algorithm not settling */

undefined8 sys_argparse(uint param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined *puVar10;
  char *pcVar11;
  char *pcVar12;
  uint *puVar13;
  FILE *pFVar14;
  uint uVar15;
  double dVar16;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_94;
  int local_90 [4];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c;
  int local_68 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  sys_get_audio_settings((undefined8 *)&local_98);
joined_r0x005436c1:
  if (((int)param_1 < 1) || (pcVar12 = (char *)*param_2, *pcVar12 != '-')) goto LAB_00544df3;
  iVar2 = strcmp(pcVar12,"-r");
  if ((iVar2 == 0) && (1 < param_1)) {
    iVar2 = __isoc99_sscanf(param_2[1],"%d",local_44);
    if (iVar2 < 1) {
      pcVar12 = (char *)*param_2;
      goto LAB_00543717;
    }
    goto LAB_00544320;
  }
LAB_00543717:
  iVar2 = strcmp(pcVar12,"-inchannels");
  if (iVar2 == 0) {
    if (param_1 < 2) goto LAB_00544e93;
    pcVar12 = (char *)param_2[1];
    if (*pcVar12 != '\0') {
      lVar8 = strtol(pcVar12,(char **)&local_a0,10);
      local_7c = (undefined4)lVar8;
      pcVar11 = (char *)CONCAT44(local_a0._4_4_,(float)local_a0);
      if (pcVar11 != pcVar12) {
        if ((*pcVar11 != '\0') && (pcVar11[1] != '\0')) {
          lVar8 = strtol(pcVar11 + 1,(char **)&local_a0,10);
          local_78 = (undefined4)lVar8;
          pcVar12 = (char *)CONCAT44(local_a0._4_4_,(float)local_a0);
          if (pcVar12 != pcVar11 + 1) {
            if ((*pcVar12 != '\0') && (pcVar12[1] != '\0')) {
              lVar8 = strtol(pcVar12 + 1,(char **)&local_a0,10);
              local_74 = (undefined4)lVar8;
              pcVar11 = (char *)CONCAT44(local_a0._4_4_,(float)local_a0);
              if (pcVar11 != pcVar12 + 1) {
                if ((*pcVar11 != '\0') && (pcVar11[1] != '\0')) {
                  lVar8 = strtol(pcVar11 + 1,(char **)&local_a0,10);
                  local_70 = (undefined4)lVar8;
                  if ((char *)CONCAT44(local_a0._4_4_,(float)local_a0) != pcVar11 + 1) {
                    local_80 = 4;
                    goto LAB_00544320;
                  }
                }
                local_80 = 3;
                goto LAB_00544320;
              }
            }
            local_80 = 2;
            goto LAB_00544320;
          }
        }
        local_80 = 1;
        goto LAB_00544320;
      }
    }
    goto LAB_00544e81;
  }
  iVar2 = strcmp(pcVar12,"-outchannels");
  if (iVar2 == 0) {
    if (param_1 < 2) goto LAB_00544e93;
    pcVar12 = (char *)param_2[1];
    if (*pcVar12 != '\0') {
      lVar8 = strtol(pcVar12,(char **)&local_a0,10);
      local_54 = (undefined4)lVar8;
      pcVar11 = (char *)CONCAT44(local_a0._4_4_,(float)local_a0);
      if (pcVar11 != pcVar12) {
        if ((*pcVar11 != '\0') && (pcVar11[1] != '\0')) {
          lVar8 = strtol(pcVar11 + 1,(char **)&local_a0,10);
          local_50 = (undefined4)lVar8;
          pcVar12 = (char *)CONCAT44(local_a0._4_4_,(float)local_a0);
          if (pcVar12 != pcVar11 + 1) {
            if (*pcVar12 != '\0') {
              cVar1 = pcVar12[1];
joined_r0x005440f8:
              if (cVar1 != '\0') {
                lVar8 = strtol(pcVar12 + 1,(char **)&local_a0,10);
                local_4c = (undefined4)lVar8;
                pcVar11 = (char *)CONCAT44(local_a0._4_4_,(float)local_a0);
                if (pcVar11 != pcVar12 + 1) {
                  if ((*pcVar11 != '\0') && (pcVar11[1] != '\0')) {
                    lVar8 = strtol(pcVar11 + 1,(char **)&local_a0,10);
                    local_48 = (undefined4)lVar8;
                    if ((char *)CONCAT44(local_a0._4_4_,(float)local_a0) != pcVar11 + 1) {
                      local_58 = 4;
                      goto LAB_00544320;
                    }
                  }
                  local_58 = 3;
                  goto LAB_00544320;
                }
              }
            }
LAB_00544341:
            local_58 = 2;
            goto LAB_00544320;
          }
        }
LAB_00544317:
        local_58 = 1;
        goto LAB_00544320;
      }
    }
LAB_00544e8b:
    local_58 = 0;
LAB_00544e93:
    puVar10 = PTR_stderr_00715948;
    lVar8 = 0;
    do {
      fputs(*(char **)((long)&usagemessage + lVar8),*(FILE **)puVar10);
      fflush(*(FILE **)puVar10);
      lVar8 = lVar8 + 8;
    } while (lVar8 != 0x240);
    return 1;
  }
  iVar2 = strcmp(pcVar12,"-channels");
  if (iVar2 == 0) {
    if (param_1 < 2) goto LAB_00544e93;
    pcVar12 = (char *)param_2[1];
    if (*pcVar12 != '\0') {
      lVar8 = strtol(pcVar12,(char **)&local_a0,10);
      local_7c = (undefined4)lVar8;
      pcVar11 = (char *)CONCAT44(local_a0._4_4_,(float)local_a0);
      if (pcVar11 != pcVar12) {
        if ((*pcVar11 == '\0') || (pcVar11[1] == '\0')) {
LAB_00544221:
          local_80 = 1;
        }
        else {
          lVar8 = strtol(pcVar11 + 1,(char **)&local_a0,10);
          local_78 = (undefined4)lVar8;
          pcVar12 = (char *)CONCAT44(local_a0._4_4_,(float)local_a0);
          if (pcVar12 == pcVar11 + 1) goto LAB_00544221;
          if ((*pcVar12 == '\0') || (pcVar12[1] == '\0')) {
LAB_00544359:
            local_80 = 2;
          }
          else {
            lVar8 = strtol(pcVar12 + 1,(char **)&local_a0,10);
            local_74 = (undefined4)lVar8;
            pcVar11 = (char *)CONCAT44(local_a0._4_4_,(float)local_a0);
            if (pcVar11 == pcVar12 + 1) goto LAB_00544359;
            if ((*pcVar11 == '\0') || (pcVar11[1] == '\0')) {
LAB_005443cb:
              local_80 = 3;
            }
            else {
              lVar8 = strtol(pcVar11 + 1,(char **)&local_a0,10);
              local_70 = (undefined4)lVar8;
              if ((char *)CONCAT44(local_a0._4_4_,(float)local_a0) == pcVar11 + 1)
              goto LAB_005443cb;
              local_80 = 4;
            }
          }
        }
        pcVar12 = (char *)param_2[1];
        if (*pcVar12 != '\0') {
          lVar8 = strtol(pcVar12,(char **)&local_a0,10);
          local_54 = (undefined4)lVar8;
          pcVar11 = (char *)CONCAT44(local_a0._4_4_,(float)local_a0);
          if (pcVar11 != pcVar12) {
            if ((*pcVar11 != '\0') && (pcVar11[1] != '\0')) {
              lVar8 = strtol(pcVar11 + 1,(char **)&local_a0,10);
              local_50 = (undefined4)lVar8;
              pcVar12 = (char *)CONCAT44(local_a0._4_4_,(float)local_a0);
              if (pcVar12 != pcVar11 + 1) {
                if (*pcVar12 != '\0') {
                  cVar1 = pcVar12[1];
                  goto joined_r0x005440f8;
                }
                goto LAB_00544341;
              }
            }
            goto LAB_00544317;
          }
        }
        goto LAB_00544e8b;
      }
    }
LAB_00544e81:
    local_80 = 0;
    goto LAB_00544e93;
  }
  iVar2 = strcmp(pcVar12,"-soundbuf");
  if ((iVar2 == 0) || (iVar2 = strcmp(pcVar12,"-audiobuf"), iVar2 == 0)) {
    if (param_1 < 2) goto LAB_00544e93;
    lVar8 = strtol((char *)param_2[1],(char **)0x0,10);
    local_40 = (undefined4)lVar8;
    goto LAB_00544320;
  }
  iVar2 = strcmp(pcVar12,"-callback");
  if (iVar2 == 0) {
    local_3c = 1;
LAB_00544407:
    param_1 = param_1 - 1;
    param_2 = param_2 + 1;
    goto joined_r0x005436c1;
  }
  iVar2 = strcmp(pcVar12,"-nocallback");
  if (iVar2 == 0) {
    local_3c = 0;
    goto LAB_00544407;
  }
  iVar2 = strcmp(pcVar12,"-blocksize");
  if (iVar2 == 0) {
    lVar8 = strtol((char *)param_2[1],(char **)0x0,10);
    local_38 = (undefined4)lVar8;
  }
  else {
    iVar2 = strcmp(pcVar12,"-sleepgrain");
    if (iVar2 == 0) {
      if (param_1 < 2) goto LAB_00544e93;
      dVar16 = strtod((char *)param_2[1],(char **)0x0);
      *(int *)PTR_sys_sleepgrain_00715c20 = (int)(dVar16 * DAT_006544a0);
      goto LAB_00544320;
    }
    iVar2 = strcmp(pcVar12,"-nodac");
    if (iVar2 == 0) {
LAB_005443e5:
      local_58 = 0;
      local_6c = 0;
      goto LAB_00544407;
    }
    iVar2 = strcmp(pcVar12,"-noadc");
    if (iVar2 == 0) {
      local_80 = 0;
      local_94 = 0;
      goto LAB_00544407;
    }
    iVar2 = strcmp(pcVar12,"-nosound");
    if ((iVar2 == 0) || (iVar2 = strcmp(pcVar12,"-noaudio"), iVar2 == 0)) {
      local_80 = 0;
      local_94 = 0;
      goto LAB_005443e5;
    }
    iVar2 = strcmp(pcVar12,"-oss");
    if ((iVar2 == 0) || (iVar2 = strcmp(pcVar12,"-ossmidi"), iVar2 == 0)) {
      pFVar14 = *(FILE **)PTR_stderr_00715948;
      pcVar11 = "Pd compiled without OSS-support, ignoring \'%s\' flag\n";
LAB_00544535:
      fprintf(pFVar14,pcVar11,pcVar12);
      goto LAB_00544407;
    }
    iVar2 = strcmp(pcVar12,"-alsa");
    if ((iVar2 == 0) || (iVar2 = strcmp(pcVar12,"-alsamidi"), iVar2 == 0)) {
      pFVar14 = *(FILE **)PTR_stderr_00715948;
      pcVar11 = "Pd compiled without ALSA-support, ignoring \'%s\' flag\n";
      goto LAB_00544535;
    }
    iVar2 = strcmp(pcVar12,"-alsaadd");
    if (iVar2 == 0) {
      if (param_1 < 2) goto LAB_00544e93;
      pFVar14 = *(FILE **)PTR_stderr_00715948;
      pcVar11 = "Pd compiled without ALSA-support, ignoring \'%s\' flag\n";
LAB_0054444f:
      fprintf(pFVar14,pcVar11,pcVar12);
      goto LAB_00544320;
    }
    iVar2 = strcmp(pcVar12,"-jack");
    if (((iVar2 == 0) || (iVar2 = strcmp(pcVar12,"-jackconnect"), iVar2 == 0)) ||
       (iVar2 = strcmp(pcVar12,"-nojackconnect"), iVar2 == 0)) {
      pFVar14 = *(FILE **)PTR_stderr_00715948;
      pcVar11 = "Pd compiled without JACK-support, ignoring \'%s\' flag\n";
      goto LAB_00544535;
    }
    iVar2 = strcmp(pcVar12,"-jackname");
    if (iVar2 == 0) {
      if (param_1 < 2) goto LAB_00544e93;
      pFVar14 = *(FILE **)PTR_stderr_00715948;
      pcVar11 = "Pd compiled without JACK-support, ignoring \'%s\' flag\n";
      goto LAB_0054444f;
    }
    iVar2 = strcmp(pcVar12,"-pa");
    if ((iVar2 == 0) || (iVar2 = strcmp(pcVar12,"-portaudio"), iVar2 == 0)) {
      pFVar14 = *(FILE **)PTR_stderr_00715948;
      pcVar11 = "Pd compiled without PortAudio-support, ignoring \'%s\' flag\n";
      goto LAB_00544535;
    }
    iVar2 = strcmp(pcVar12,"-asio");
    if (iVar2 == 0) {
      pFVar14 = *(FILE **)PTR_stderr_00715948;
      pcVar11 = "Pd compiled without ASIO-support, ignoring \'%s\' flag\n";
      goto LAB_0054444f;
    }
    iVar2 = strcmp(pcVar12,"-mmio");
    if (iVar2 == 0) {
      pFVar14 = *(FILE **)PTR_stderr_00715948;
      pcVar11 = "Pd compiled without MMIO-support, ignoring \'%s\' flag\n";
      goto LAB_00544535;
    }
    iVar2 = strcmp(pcVar12,"-audiounit");
    if (iVar2 == 0) {
      pFVar14 = *(FILE **)PTR_stderr_00715948;
      pcVar11 = "Pd compiled without AudioUnit-support, ignoring \'%s\' flag\n";
      goto LAB_00544535;
    }
    iVar2 = strcmp(pcVar12,"-esd");
    if (iVar2 == 0) {
      pFVar14 = *(FILE **)PTR_stderr_00715948;
      pcVar11 = "Pd compiled without ESD-support, ignoring \'%s\' flag\n";
      goto LAB_00544535;
    }
    iVar2 = strcmp(pcVar12,"-listdev");
    if (iVar2 == 0) {
      sys_listplease = 1;
      goto LAB_00544407;
    }
    iVar2 = strcmp(pcVar12,"-soundindev");
    if ((iVar2 == 0) || (iVar2 = strcmp(pcVar12,"-audioindev"), iVar2 == 0)) {
      if (param_1 < 2) goto LAB_00544e93;
      pcVar12 = (char *)param_2[1];
      puVar13 = &local_94;
      piVar9 = local_90;
LAB_0054457c:
      uVar3 = sys_parsedevlist(puVar13,(long)piVar9,4,pcVar12);
      iVar2 = (int)uVar3;
joined_r0x00544588:
      if (iVar2 == 0) goto LAB_00544e93;
      goto LAB_00544320;
    }
    iVar2 = strcmp(pcVar12,"-soundoutdev");
    if ((iVar2 == 0) || (iVar2 = strcmp(pcVar12,"-audiooutdev"), iVar2 == 0)) {
      if (param_1 < 2) goto LAB_00544e93;
LAB_0054456e:
      pcVar12 = (char *)param_2[1];
      puVar13 = &local_6c;
      piVar9 = local_68;
      goto LAB_0054457c;
    }
    iVar2 = strcmp(pcVar12,"-sounddev");
    if ((iVar2 == 0) || (iVar2 = strcmp(pcVar12,"-audiodev"), iVar2 == 0)) {
      if ((param_1 < 2) ||
         (uVar3 = sys_parsedevlist(&local_94,(long)local_90,4,(char *)param_2[1]), (int)uVar3 == 0))
      goto LAB_00544e93;
      goto LAB_0054456e;
    }
    iVar2 = strcmp(pcVar12,"-audioaddindev");
    if (iVar2 == 0) {
      if (param_1 < 2) goto LAB_00544e93;
      if ((int)local_94 < 0) {
        local_94 = 0;
      }
      else if (3 < local_94) {
LAB_005445c7:
        pFVar14 = *(FILE **)PTR_stderr_00715948;
        pcVar12 = "number of audio devices limited to %d\n";
LAB_005447b1:
        uVar5 = 4;
LAB_005447b6:
        fprintf(pFVar14,pcVar12,uVar5);
        goto LAB_00544320;
      }
      uVar3 = sys_audiodevnametonumber(0,(char *)param_2[1]);
      if (-1 < (int)uVar3) {
        lVar8 = (long)(int)local_94;
        local_94 = local_94 + 1;
        local_90[lVar8] = (int)uVar3 + 1;
        goto LAB_00544320;
      }
      pFVar14 = *(FILE **)PTR_stderr_00715948;
      pcVar12 = (char *)param_2[1];
      pcVar11 = "Couldn\'t find audio input device: %s\n";
      goto LAB_0054444f;
    }
    iVar2 = strcmp(pcVar12,"-audioaddoutdev");
    if (iVar2 == 0) {
      if (param_1 < 2) goto LAB_00544e93;
      if ((int)local_6c < 0) {
        local_6c = 0;
      }
      else if (3 < local_6c) goto LAB_005445c7;
LAB_005446a4:
      uVar3 = sys_audiodevnametonumber(1,(char *)param_2[1]);
      if (-1 < (int)uVar3) {
        lVar8 = (long)(int)local_6c;
        local_6c = local_6c + 1;
        local_68[lVar8] = (int)uVar3 + 1;
        goto LAB_00544320;
      }
      pFVar14 = *(FILE **)PTR_stderr_00715948;
      pcVar12 = (char *)param_2[1];
      pcVar11 = "Couldn\'t find audio output device: %s\n";
      goto LAB_0054444f;
    }
    iVar2 = strcmp(pcVar12,"-audioadddev");
    if (iVar2 == 0) {
      if (param_1 < 2) goto LAB_00544e93;
      if ((int)local_94 < 0) {
        local_94 = 0;
      }
      if ((int)local_6c < 0) {
        local_6c = 0;
      }
      if ((3 < local_94) || (3 < local_6c)) {
        pFVar14 = *(FILE **)PTR_stderr_00715948;
        pcVar12 = "number of audio devices limited to %d";
        goto LAB_005447b1;
      }
      uVar3 = sys_audiodevnametonumber(0,(char *)param_2[1]);
      if ((int)uVar3 < 0) {
        fprintf(*(FILE **)PTR_stderr_00715948,"Couldn\'t find audio input device: %s\n",
                (char *)param_2[1]);
      }
      else {
        lVar8 = (long)(int)local_94;
        local_94 = local_94 + 1;
        local_90[lVar8] = (int)uVar3 + 1;
      }
      goto LAB_005446a4;
    }
    iVar2 = strcmp(pcVar12,"-nomidiin");
    if (iVar2 == 0) {
LAB_005446db:
      *(undefined4 *)PTR_sys_nmidiin_00715848 = 0;
      goto LAB_00544407;
    }
    iVar2 = strcmp(pcVar12,"-nomidiout");
    if (iVar2 == 0) {
      *(undefined4 *)PTR_sys_nmidiout_007155a0 = 0;
      goto LAB_00544407;
    }
    iVar2 = strcmp(pcVar12,"-nomidi");
    if (iVar2 == 0) {
      *(undefined4 *)PTR_sys_nmidiout_007155a0 = 0;
      goto LAB_005446db;
    }
    iVar2 = strcmp(pcVar12,"-midiindev");
    if (iVar2 == 0) {
      if (param_1 < 2) goto LAB_00544e93;
      pcVar12 = (char *)param_2[1];
      puVar10 = PTR_sys_midiindevlist_00715d10;
      piVar9 = (int *)PTR_sys_nmidiin_00715848;
LAB_00544788:
      sys_parsedevlist(piVar9,(long)puVar10,0x10,pcVar12);
      iVar2 = *piVar9;
      goto joined_r0x00544588;
    }
    iVar2 = strcmp(pcVar12,"-midioutdev");
    if (iVar2 == 0) {
      if (param_1 < 2) goto LAB_00544e93;
LAB_00544773:
      pcVar12 = (char *)param_2[1];
      puVar10 = PTR_sys_midioutdevlist_00715768;
      piVar9 = (int *)PTR_sys_nmidiout_007155a0;
      goto LAB_00544788;
    }
    iVar2 = strcmp(pcVar12,"-mididev");
    if (iVar2 == 0) {
      if (param_1 < 2) goto LAB_00544e93;
      sys_parsedevlist((undefined4 *)PTR_sys_nmidiin_00715848,(long)PTR_sys_midiindevlist_00715d10,
                       0x10,(char *)param_2[1]);
      goto LAB_00544773;
    }
    iVar2 = strcmp(pcVar12,"-midiaddindev");
    if (iVar2 == 0) {
      if (param_1 < 2) goto LAB_00544e93;
      if ((int)*(uint *)PTR_sys_nmidiin_00715848 < 0) {
        *(undefined4 *)PTR_sys_nmidiin_00715848 = 0;
      }
      else if (0xf < *(uint *)PTR_sys_nmidiin_00715848) {
LAB_0054482d:
        pFVar14 = *(FILE **)PTR_stderr_00715948;
        pcVar12 = "number of MIDI devices limited to %d\n";
        uVar5 = 0x10;
        goto LAB_005447b6;
      }
      uVar5 = sys_mididevnametonumber();
      if ((int)uVar5 < 0) {
        pFVar14 = *(FILE **)PTR_stderr_00715948;
        pcVar12 = (char *)param_2[1];
        pcVar11 = "Couldn\'t find MIDI input device: %s\n";
        goto LAB_0054444f;
      }
      iVar2 = *(int *)PTR_sys_nmidiin_00715848;
      *(int *)PTR_sys_nmidiin_00715848 = iVar2 + 1;
      *(int *)(PTR_sys_midiindevlist_00715d10 + (long)iVar2 * 4) = (int)uVar5 + 1;
      goto LAB_00544320;
    }
    iVar2 = strcmp(pcVar12,"-midiaddoutdev");
    if (iVar2 == 0) {
      if (param_1 < 2) goto LAB_00544e93;
      if ((int)*(uint *)PTR_sys_nmidiout_007155a0 < 0) {
        *(undefined4 *)PTR_sys_nmidiout_007155a0 = 0;
      }
      else if (0xf < *(uint *)PTR_sys_nmidiout_007155a0) goto LAB_0054482d;
LAB_0054499b:
      uVar5 = sys_mididevnametonumber();
      if (-1 < (int)uVar5) {
        iVar2 = *(int *)PTR_sys_nmidiout_007155a0;
        *(int *)PTR_sys_nmidiout_007155a0 = iVar2 + 1;
        *(int *)(PTR_sys_midioutdevlist_00715768 + (long)iVar2 * 4) = (int)uVar5 + 1;
        goto LAB_00544320;
      }
      pFVar14 = *(FILE **)PTR_stderr_00715948;
      pcVar12 = (char *)param_2[1];
      pcVar11 = "Couldn\'t find MIDI output device: %s\n";
      goto LAB_0054444f;
    }
    iVar2 = strcmp(pcVar12,"-midiadddev");
    if (iVar2 == 0) {
      if (param_1 < 2) goto LAB_00544e93;
      uVar15 = *(uint *)PTR_sys_nmidiin_00715848;
      if ((int)uVar15 < 0) {
        *(undefined4 *)PTR_sys_nmidiin_00715848 = 0;
        uVar15 = 0;
        uVar6 = *(uint *)PTR_sys_nmidiout_007155a0;
      }
      else {
        uVar6 = *(uint *)PTR_sys_nmidiout_007155a0;
      }
      if ((int)uVar6 < 0) {
        *(undefined4 *)PTR_sys_nmidiout_007155a0 = 0;
        uVar6 = 0;
      }
      if ((0xf < uVar15) || (0xf < uVar6)) {
        pFVar14 = *(FILE **)PTR_stderr_00715948;
        pcVar12 = "number of MIDI devices limited to %d";
        uVar5 = 0x10;
        goto LAB_005447b6;
      }
      uVar5 = sys_mididevnametonumber();
      if ((int)uVar5 < 0) {
        fprintf(*(FILE **)PTR_stderr_00715948,"Couldn\'t find MIDI output device: %s\n",
                (char *)param_2[1]);
      }
      else {
        iVar2 = *(int *)PTR_sys_nmidiin_00715848;
        *(int *)PTR_sys_nmidiin_00715848 = iVar2 + 1;
        *(int *)(PTR_sys_midioutdevlist_00715768 + (long)iVar2 * 4) = (int)uVar5 + 1;
      }
      goto LAB_0054499b;
    }
    iVar2 = strcmp(pcVar12,"-path");
    if (iVar2 == 0) {
      if (param_1 < 2) goto LAB_00544e93;
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      uVar5 = namelist_append_files(*(undefined8 **)(*(long *)(*plVar4 + 0x50) + 0x20),param_2[1]);
      *(undefined8 *)(*(long *)(*plVar4 + 0x50) + 0x20) = uVar5;
      goto LAB_00544320;
    }
    iVar2 = strcmp(pcVar12,"-nostdpath");
    if (iVar2 == 0) {
      *(undefined4 *)PTR_sys_usestdpath_00715ef8 = 0;
      goto LAB_00544407;
    }
    iVar2 = strcmp(pcVar12,"-stdpath");
    if (iVar2 == 0) {
      *(undefined4 *)PTR_sys_usestdpath_00715ef8 = 1;
      goto LAB_00544407;
    }
    iVar2 = strcmp(pcVar12,"-helppath");
    if (iVar2 == 0) {
      if (param_1 < 2) goto LAB_00544e93;
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      uVar5 = namelist_append_files(*(undefined8 **)(*(long *)(*plVar4 + 0x50) + 0x18),param_2[1]);
      *(undefined8 *)(*(long *)(*plVar4 + 0x50) + 0x18) = uVar5;
      goto LAB_00544320;
    }
    iVar2 = strcmp(pcVar12,"-open");
    if (iVar2 == 0) {
      if (param_1 < 2) goto LAB_00544e93;
      sys_openlist = patchlist_append(sys_openlist,param_2[1],(char *)0x0);
      goto LAB_00544320;
    }
    iVar2 = strcmp(pcVar12,"-open-with-args");
    if (iVar2 == 0) {
      if (param_1 < 3) goto LAB_00544e93;
      sys_openlist = patchlist_append(sys_openlist,param_2[1],(char *)param_2[2]);
      param_1 = param_1 - 3;
      param_2 = param_2 + 3;
      goto joined_r0x005436c1;
    }
    iVar2 = strcmp(pcVar12,"-lib");
    if (iVar2 == 0) {
      if (param_1 < 2) goto LAB_00544e93;
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      uVar5 = namelist_append_files((undefined8 *)**(undefined8 **)(*plVar4 + 0x50),param_2[1]);
      **(undefined8 **)(*plVar4 + 0x50) = uVar5;
    }
    else {
      iVar2 = strcmp(pcVar12,"-font-size");
      if ((iVar2 == 0) || (iVar2 = strcmp(pcVar12,"-font"), iVar2 == 0)) {
        if (param_1 < 2) goto LAB_00544e93;
        lVar8 = strtol((char *)param_2[1],(char **)0x0,10);
        lVar7 = 0;
        uVar15 = (uint)lVar8;
        if ((((9 < (int)uVar15) && (lVar7 = 1, 0xb < uVar15)) && (lVar7 = 2, 0xf < uVar15)) &&
           (lVar7 = 3, 0x17 < uVar15)) {
          lVar7 = 5 - (ulong)(uVar15 < 0x24);
        }
        *(undefined4 *)PTR_sys_defaultfont_00715900 = (&sys_fontspec)[lVar7 * 3];
      }
      else {
        iVar2 = strcmp(pcVar12,"-font-face");
        if ((iVar2 != 0) && (iVar2 = strcmp(pcVar12,"-typeface"), iVar2 != 0)) {
          iVar2 = strcmp(pcVar12,"-font-weight");
          puVar10 = PTR_sys_fontweight_00715e60;
          if (iVar2 == 0) {
            if (param_1 < 2) goto LAB_00544e93;
            strncpy(PTR_sys_fontweight_00715e60,(char *)param_2[1],9);
            puVar10[9] = 0;
            goto LAB_00544320;
          }
          iVar2 = strcmp(pcVar12,"-verbose");
          if (iVar2 == 0) {
            *(int *)PTR_sys_verbose_00715ce0 = *(int *)PTR_sys_verbose_00715ce0 + 1;
          }
          else {
            iVar2 = strcmp(pcVar12,"-noverbose");
            if (iVar2 == 0) {
              *(undefined4 *)PTR_sys_verbose_00715ce0 = 0;
            }
            else {
              iVar2 = strcmp(pcVar12,"-version");
              if (iVar2 == 0) {
                sys_version = 1;
              }
              else {
                iVar2 = strcmp(pcVar12,"-d");
                if ((iVar2 == 0) && (1 < param_1)) {
                  iVar2 = __isoc99_sscanf(param_2[1],"%d",PTR_sys_debuglevel_007154a8);
                  if (0 < iVar2) goto LAB_00544320;
                  pcVar12 = (char *)*param_2;
                }
                iVar2 = strcmp(pcVar12,"-loadbang");
                if (iVar2 == 0) {
                  *(undefined4 *)PTR_sys_noloadbang_00715fb0 = 0;
                }
                else {
                  iVar2 = strcmp(pcVar12,"-noloadbang");
                  if (iVar2 == 0) {
                    *(undefined4 *)PTR_sys_noloadbang_00715fb0 = 1;
                  }
                  else {
                    iVar2 = strcmp(pcVar12,"-gui");
                    if (iVar2 == 0) {
                      sys_dontstartgui = '\0';
                    }
                    else {
                      iVar2 = strcmp(pcVar12,"-nogui");
                      if (iVar2 == 0) {
                        sys_dontstartgui = '\x01';
                      }
                      else {
                        iVar2 = strcmp(pcVar12,"-guiport");
                        if ((iVar2 == 0) && (1 < param_1)) {
                          iVar2 = __isoc99_sscanf(param_2[1],"%d",PTR_sys_guisetportnumber_007155e0)
                          ;
                          if (0 < iVar2) goto LAB_00544320;
                          pcVar12 = (char *)*param_2;
                        }
                        iVar2 = strcmp(pcVar12,"-nostderr");
                        if (iVar2 == 0) {
                          *(undefined4 *)PTR_sys_printtostderr_00715f78 = 0;
                          goto LAB_00544407;
                        }
                        iVar2 = strcmp(pcVar12,"-stderr");
                        if (iVar2 != 0) {
                          iVar2 = strcmp(pcVar12,"-guicmd");
                          if (iVar2 == 0) {
                            if (param_1 < 2) goto LAB_00544e93;
                            *(long *)PTR_sys_guicmd_00715740 = param_2[1];
                            goto LAB_00544320;
                          }
                          iVar2 = strcmp(pcVar12,"-send");
                          if (iVar2 != 0) {
                            iVar2 = strcmp(pcVar12,"-schedlib");
                            if (iVar2 == 0) {
                              if (param_1 < 2) goto LAB_00544e93;
                              *(undefined4 *)PTR_sys_externalschedlib_00715868 = 1;
                              strncpy(PTR_sys_externalschedlibname_00715408,(char *)param_2[1],999);
                              local_98 = 0;
                            }
                            else {
                              iVar2 = strcmp(pcVar12,"-extraflags");
                              if (iVar2 != 0) {
                                iVar2 = strcmp(pcVar12,"-batch");
                                if (iVar2 == 0) {
                                  sys_batch = '\x01';
                                }
                                else {
                                  iVar2 = strcmp(pcVar12,"-nobatch");
                                  if (iVar2 == 0) {
                                    sys_batch = '\0';
                                  }
                                  else {
                                    iVar2 = strcmp(pcVar12,"-autopatch");
                                    if (iVar2 == 0) {
                                      *(undefined4 *)PTR_sys_noautopatch_00715a78 = 0;
                                    }
                                    else {
                                      iVar2 = strcmp(pcVar12,"-noautopatch");
                                      if (iVar2 == 0) {
                                        *(undefined4 *)PTR_sys_noautopatch_00715a78 = 1;
                                      }
                                      else {
                                        iVar2 = strcmp(pcVar12,"-compatibility");
                                        if (iVar2 == 0) {
                                          if ((param_1 < 2) ||
                                             (iVar2 = __isoc99_sscanf(param_2[1],"%f",&local_a0),
                                             iVar2 < 1)) goto LAB_00544e93;
                                          *(int *)PTR_pd_compatibilitylevel_00715a40 =
                                               (int)((double)(float)local_a0 * DAT_005d90a0 +
                                                    DAT_005db338);
                                          goto LAB_00544d0d;
                                        }
                                        iVar2 = strcmp(pcVar12,"-rt");
                                        if ((iVar2 == 0) ||
                                           (iVar2 = strcmp(pcVar12,"-realtime"), iVar2 == 0)) {
                                          *(undefined4 *)PTR_sys_hipriority_007154d8 = 1;
                                        }
                                        else {
                                          iVar2 = strcmp(pcVar12,"-nrt");
                                          if (((iVar2 == 0) ||
                                              (iVar2 = strcmp(pcVar12,"-nort"), iVar2 == 0)) ||
                                             (iVar2 = strcmp(pcVar12,"-norealtime"), iVar2 == 0)) {
                                            *(undefined4 *)PTR_sys_hipriority_007154d8 = 0;
                                          }
                                          else {
                                            iVar2 = strcmp(pcVar12,"-sleep");
                                            if (iVar2 == 0) {
                                              *(undefined4 *)PTR_sys_nosleep_00715ad8 = 0;
                                            }
                                            else {
                                              iVar2 = strcmp(pcVar12,"-nosleep");
                                              if (iVar2 == 0) {
                                                *(undefined4 *)PTR_sys_nosleep_00715ad8 = 1;
                                              }
                                              else {
                                                iVar2 = strcmp(pcVar12,"-noprefs");
                                                if (iVar2 != 0) {
                                                  iVar2 = strcmp(pcVar12,"-prefsfile");
                                                  if ((iVar2 != 0) || (param_1 < 2))
                                                  goto LAB_00544e93;
                                                  goto LAB_00544320;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                goto LAB_00544407;
                              }
                              if (param_1 < 2) goto LAB_00544e93;
                              *(long *)PTR_pd_extraflags_00715c80 = param_2[1];
                            }
LAB_00544d0d:
                            param_2 = param_2 + 2;
                            param_1 = param_1 - 2;
                            goto joined_r0x005436c1;
                          }
                          if (param_1 < 2) goto LAB_00544e93;
                          sys_messagelist = namelist_append(sys_messagelist,(char *)param_2[1],1);
                          goto LAB_00544320;
                        }
                        *(undefined4 *)PTR_sys_printtostderr_00715f78 = 1;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_00544407;
        }
        puVar10 = PTR_sys_font_00715cc0;
        if (param_1 < 2) goto LAB_00544e93;
        strncpy(PTR_sys_font_00715cc0,(char *)param_2[1],99);
        puVar10[99] = 0;
      }
    }
  }
LAB_00544320:
  param_1 = param_1 - 2;
  param_2 = param_2 + 2;
  goto joined_r0x005436c1;
LAB_00544df3:
  if (sys_batch == '\x01') {
    sys_dontstartgui = '\x01';
  }
  else if (sys_dontstartgui != '\x01') {
    iVar2 = *(int *)PTR_sys_defaultfont_00715900;
    goto joined_r0x00544e3e;
  }
  *(undefined4 *)PTR_sys_printtostderr_00715f78 = 1;
  iVar2 = *(int *)PTR_sys_defaultfont_00715900;
joined_r0x00544e3e:
  if (iVar2 == 0) {
    *(int *)PTR_sys_defaultfont_00715900 = 0xc;
  }
  if (0 < (int)param_1) {
    uVar15 = param_1 + 1;
    do {
      sys_openlist = patchlist_append(sys_openlist,*param_2,(char *)0x0);
      param_2 = param_2 + 1;
      uVar15 = uVar15 - 1;
    } while (1 < uVar15);
  }
  sys_set_audio_settings((ulong *)&local_98);
  return 0;
}


