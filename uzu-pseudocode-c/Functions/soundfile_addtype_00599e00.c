// Function : soundfile_addtype
// Namespace: 
// Entry    : 00599e00
// Prototype: undefined8 soundfile_addtype(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00599e00 - 00599e90


undefined8
soundfile_addtype(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  undefined8 uVar1;
  char *__src;
  
  if (sf_numtypes == 4) {
    uVar1 = 0;
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "soundfile: max number of type implementations reached",param_11,param_12,param_13,
             param_14);
  }
  else {
    (&sf_types)[sf_numtypes] = param_9;
    sf_numtypes = sf_numtypes + 1;
    if (sf_minheadersize < (ulong)param_9[1]) {
      sf_minheadersize = param_9[1];
    }
    __src = "-";
    if (1 < sf_numtypes) {
      __src = " -";
    }
    strcat(sf_typeargs,__src);
    strcat(sf_typeargs,(char *)*param_9);
    uVar1 = 1;
  }
  return uVar1;
}


