// Function : iemgui_new_dialog
// Namespace: 
// Entry    : 005756f0
// Prototype: undefined iemgui_new_dialog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005756f0 - 005758cb


void iemgui_new_dialog(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      char *param_9,long param_10,undefined8 param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  long local_438 [4];
  char local_418 [1000];
  
  iemgui_properties(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                    local_438,param_11,param_12,param_13,param_14);
  sprintf(local_418,"|%s|",param_11);
  pdgui_stub_vnew((double)(float)param_1,(double)(float)param_2,(double)(float)param_3,
                  (double)(float)param_4,(double)(float)param_5,(double)(float)param_6,param_7,
                  param_8,param_10,"pdtk_iemgui_dialog",param_9,
                  "r s ffs ffs sfsfs i iss ii si sss ii ii kkk",local_418,&DAT_005e2ee7,0xe7);
  return;
}


