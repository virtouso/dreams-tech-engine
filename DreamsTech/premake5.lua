workspace "DreamsTech"

architecture "x64"


configurations
{
"Debug",
"Release"
}


outputdir= "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"




project "DreamsTech"
  location "DreamsTech"
  kind "ConsoleApp"
  language "C++"

  targetdir("bin/" .. outputdir .. "/%{prj.name}")
  objdir ("bin-int/" .. outputdir .. "/%{prj.name}")


  files
  {
	  "%{prj.name}/src/**.h",
	  "%{prj.name}/src/**.cpp"
  }


  includedirs
  {
	  "%{prj.name}/include"
  }

  filter "system.windows"
  {
	  cppdialect "c++17"
	  staticruntime "On"
	  systemversion "10.0.17134.0"


	  defines
	  {

	  }

	  postbuildcommands
	  {
		  ("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/TestGame")
	  }

	

  }
