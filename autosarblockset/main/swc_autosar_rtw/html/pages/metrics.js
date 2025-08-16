function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["rtARID_DEF"] = {file: "D:\\learning\\Matlab\\Matlab_Autosar\\autosarblockset\\main\\swc_autosar_rtw\\swc.c",
	size: 8};
	 this.metricsArray.fcn["Rte_IRead_swc_swc_Step1_In2_2s_In2_2s"] = {file: "D:\\learning\\Matlab\\Matlab_Autosar\\autosarblockset\\main\\swc_autosar_rtw\\stub\\Rte_swc.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["Rte_IRead_swc_swc_Step_In1_1s_In1_1s"] = {file: "D:\\learning\\Matlab\\Matlab_Autosar\\autosarblockset\\main\\swc_autosar_rtw\\stub\\Rte_swc.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["Rte_IWrite_swc_swc_Step_Out1_Out1"] = {file: "D:\\learning\\Matlab\\Matlab_Autosar\\autosarblockset\\main\\swc_autosar_rtw\\stub\\Rte_swc.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["Rte_IWrite_swc_swc_Step_Out2_Out2"] = {file: "D:\\learning\\Matlab\\Matlab_Autosar\\autosarblockset\\main\\swc_autosar_rtw\\stub\\Rte_swc.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["Rte_IrvIRead_swc_swc_Step_IRV1"] = {file: "D:\\learning\\Matlab\\Matlab_Autosar\\autosarblockset\\main\\swc_autosar_rtw\\stub\\Rte_swc.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["Rte_IrvIWrite_swc_swc_Step1_IRV1"] = {file: "D:\\learning\\Matlab\\Matlab_Autosar\\autosarblockset\\main\\swc_autosar_rtw\\stub\\Rte_swc.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["swc_Init"] = {file: "D:\\learning\\Matlab\\Matlab_Autosar\\autosarblockset\\main\\swc_autosar_rtw\\swc.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["swc_Step"] = {file: "D:\\learning\\Matlab\\Matlab_Autosar\\autosarblockset\\main\\swc_autosar_rtw\\swc.c",
	stack: 16,
	stackTotal: 16};
	 this.metricsArray.fcn["swc_Step1"] = {file: "D:\\learning\\Matlab\\Matlab_Autosar\\autosarblockset\\main\\swc_autosar_rtw\\swc.c",
	stack: 0,
	stackTotal: 0};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data; }; 
	 this.codeMetricsSummary = '<a href="javascript:void(0)" onclick="return postParentWindowMessage({message:\'gotoReportPage\', pageName:\'swc_metrics\'});">Global Memory: 8(bytes) Maximum Stack: 16(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
