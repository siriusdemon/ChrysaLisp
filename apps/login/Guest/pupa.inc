;user home
(defq *env_home* (cat "apps/login/" *env_user* "/"))

;launcher apps
(defq *env_launcher_apps* '("terminal" "debug" "help" "docs" "netmon" "stats" "boing" "freeball"
	"images" "films" "canvas" "raymarch" "pcb" "calculator" "chess" "clock" "edit")
	*env_launcher_auto_apps* '("wallpaper" "clock" "terminal"))

;wallpaper images
(defq *env_wallpaper_images* '("apps/wallpaper/wallpaper640x480.cpm"
	"apps/wallpaper/wallpaper1280x1024.cpm" "apps/wallpaper/wallpaper1920x1080.cpm"))