// Function : ex_print
// Namespace: 
// Entry    : 005c6bf0
// Prototype: undefined ex_print(float * param_1)
// Body     : 005c6bf0 - 005c7174


void ex_print(float *param_1)

{
  float *pfVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char *__format;
  undefined8 *puVar4;
  
  puVar2 = *(undefined **)(param_1 + 2);
  if (puVar2 != (undefined *)0x0) {
    pfVar1 = *(float **)(param_1 + 4);
    do {
      if (pfVar1 == param_1) break;
      switch(puVar2) {
      case (undefined *)0x1:
        puVar2 = *(undefined **)param_1;
        __format = "%ld ";
        break;
      case (undefined *)0x2:
        printf("%f ",(double)*param_1);
        goto LAB_005c6e47;
      case (undefined *)0x3:
        puVar2 = *(undefined **)param_1;
        if (0xb000d < (long)puVar2) {
          if ((long)puVar2 < 0xe0015) {
            if ((long)puVar2 < 0xc0011) {
              if (puVar2 == (undefined *)0xb000e) {
                __format = "%s";
                puVar2 = &DAT_0065ba09;
              }
              else {
                if (puVar2 != (undefined *)0xb000f) {
                  if (puVar2 == (undefined *)0xc0010) goto LAB_005c7024;
                  goto switchD_005c6e95_default;
                }
                __format = "%s";
                puVar2 = &DAT_0065ba06;
              }
              break;
            }
            if ((long)puVar2 < 0xd0013) {
              if (puVar2 == (undefined *)0xc0011) {
                putchar(0x2b);
              }
              else {
                if (puVar2 != (undefined *)0xd0012) goto switchD_005c6e95_default;
                putchar(0x25);
              }
            }
            else if (puVar2 == (undefined *)0xd0013) {
              putchar(0x2f);
            }
            else {
              if (puVar2 != (undefined *)0xd0014) goto switchD_005c6e95_default;
              putchar(0x2a);
            }
          }
          else if ((long)puVar2 < 0xf0018) {
            if (puVar2 == (undefined *)0xe0015) {
LAB_005c7024:
              putchar(0x2d);
            }
            else if (puVar2 == (undefined *)0xe0016) {
              putchar(0x7e);
            }
            else {
              if (puVar2 != (undefined *)0xe0017) goto switchD_005c6e95_default;
              putchar(0x21);
            }
          }
          else {
            switch(puVar2) {
            case (undefined *)0xf0018:
              uVar3 = 0x5d;
              break;
            case (undefined *)0xf0019:
              goto switchD_005c6c55_caseD_a;
            case (undefined *)0xf001a:
              uVar3 = 0x29;
              break;
            case (undefined *)0xf001b:
              goto switchD_005c6c55_caseD_9;
            default:
              goto switchD_005c6e95_default;
            }
            printf("%c ",uVar3);
          }
          goto LAB_005c6e47;
        }
        if ((long)puVar2 < 0x80007) {
          if ((long)puVar2 < 0x40003) {
            if (puVar2 == (undefined *)0x10001) {
              putchar(0x3b);
            }
            else if (puVar2 == (undefined *)0x20002) {
              putchar(0x2c);
            }
            else {
              if (puVar2 != (undefined *)0x3001c) goto switchD_005c6e95_default;
              putchar(0x3d);
            }
          }
          else {
            if ((long)puVar2 < 0x60005) {
              if (puVar2 == (undefined *)0x40003) {
                __format = "%s";
                puVar2 = &DAT_0065ba03;
              }
              else {
                if (puVar2 != (undefined *)0x50004) goto switchD_005c6e95_default;
                __format = "%s";
                puVar2 = &DAT_0065ba00;
              }
              break;
            }
            if (puVar2 == (undefined *)0x60005) {
              putchar(0x7c);
            }
            else {
              if (puVar2 != (undefined *)0x70006) goto switchD_005c6e95_default;
              putchar(0x5e);
            }
          }
          goto LAB_005c6e47;
        }
        if ((long)puVar2 < 0xa000a) {
          if (puVar2 != (undefined *)0x80007) {
            if (puVar2 == (undefined *)0x90008) {
              __format = "%s";
              puVar2 = &DAT_0065b9fd;
            }
            else {
              if (puVar2 != (undefined *)0x90009) goto switchD_005c6e95_default;
              __format = "%s";
              puVar2 = &DAT_0065b9fa;
            }
            break;
          }
          putchar(0x26);
          goto LAB_005c6e47;
        }
        switch(puVar2) {
        case (undefined *)0xa000a:
          __format = "%s";
          puVar2 = &DAT_0065a741;
          break;
        case (undefined *)0xa000b:
          putchar(0x3e);
          goto LAB_005c6e47;
        case (undefined *)0xa000c:
          __format = "%s";
          puVar2 = &DAT_0065a744;
          break;
        case (undefined *)0xa000d:
          putchar(0x3c);
          goto LAB_005c6e47;
        default:
switchD_005c6e95_default:
          __format = "expr: ex_print: bad op 0x%lx\n";
        }
        break;
      case (undefined *)0x4:
        puVar2 = *(undefined **)param_1;
        __format = "%s ";
        break;
      case (undefined *)0x5:
        puVar4 = *(undefined8 **)param_1;
        if (puVar4 != (undefined8 *)0x0) goto LAB_005c6d82;
        __format = "%s ";
        puVar2 = &DAT_006600c8;
        break;
      case (undefined *)0x6:
        puVar2 = (undefined *)**(undefined8 **)param_1;
        __format = "%s ";
        break;
      case (undefined *)0x7:
        if (((uint)param_1[6] & 1) != 0) {
          printf("\"%s\"\n",*(char **)param_1);
          return;
        }
        puVar2 = (undefined *)ex_symname(*(undefined8 **)param_1);
        __format = "\"%s\" ";
        break;
      case (undefined *)0x8:
        puVar2 = (undefined *)(*(long *)param_1 + 1);
        __format = "\"$s%ld\" ";
        break;
      case (undefined *)0x9:
switchD_005c6c55_caseD_9:
        putchar(0x28);
        goto LAB_005c6e47;
      case (undefined *)0xa:
switchD_005c6c55_caseD_a:
        putchar(0x5b);
        goto LAB_005c6e47;
      case (undefined *)0xb:
        puVar2 = (undefined *)(*(long *)param_1 + 1);
        __format = "$i%ld ";
        break;
      case (undefined *)0xc:
        puVar2 = (undefined *)(*(long *)param_1 + 1);
        __format = "$f%ld ";
        break;
      case (undefined *)0xd:
        puVar2 = (undefined *)(*(long *)param_1 + 1);
        __format = "$s%lx ";
        break;
      case (undefined *)0xe:
        puVar2 = *(undefined **)param_1;
        __format = "$v%lx ";
        break;
      case (undefined *)0xf:
        puVar2 = *(undefined **)param_1;
        __format = "vec = %ld ";
        break;
      case (undefined *)0x10:
      case (undefined *)0x11:
        puVar2 = (undefined *)(*(long *)param_1 + 1);
        __format = "$y%ld";
        break;
      case (undefined *)0x12:
      case (undefined *)0x14:
        puVar2 = (undefined *)(*(long *)param_1 + 1);
        __format = "$x%ld";
        break;
      default:
        __format = "expr: ex_print: bad type 0x%lx\n";
        break;
      case (undefined *)0x15:
        puVar4 = *(undefined8 **)param_1;
LAB_005c6d82:
        puVar2 = (undefined *)ex_symname(puVar4);
        __format = "%s ";
      }
      printf(__format,puVar2);
LAB_005c6e47:
      puVar2 = *(undefined **)(param_1 + 10);
      param_1 = param_1 + 8;
    } while (puVar2 != (undefined *)0x0);
  }
  putchar(10);
  return;
}


