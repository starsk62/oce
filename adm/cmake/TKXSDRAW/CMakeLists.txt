SET(TOOLKIT TKXSDRAW)

SET(TOOLKIT_MODULES
	SWDRAW
	XSDRAW
	XSDRAWIGES
	XSDRAWSTEP
	XSDRAWSTLVRML
)
SET(TOOLKIT_DEPENDS
	TKBRep
	TKV3d
	TKMath
	TKNIS
	TKernel
	TKService
	TKXSBase
	TKMeshVS
	TKG3d
	TKViewerTest
	TKG2d
	TKSTEPBase
	TKTopAlgo
	TKShHealing
	TKGeomBase
	TKGeomAlgo
	TKMesh
	TKDraw
	TKSTEP
	TKIGES
	TKSTL
	TKVRML
)

SET(TOOLKIT_IS_PRIVATE TRUE)

INCLUDE(../BuildToolkit.cmake)

