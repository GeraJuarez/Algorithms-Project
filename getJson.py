import urllib.request, json

url = "http://steamspy.com/api.php?request=all"
user_agent = 'Mozilla/5.0 (Windows; U; Windows NT 5.1; en-US; rv:1.9.0.7) Gecko/2009021910 Firefox/3.0.7'
headers={'User-Agent':user_agent,}

request=urllib.request.Request(url,None,headers)
response = urllib.request.urlopen(request)
data = response.read()
games_json = json.loads(data)
games = games_json.keys()
print("Graph g;")
for i in games:
	if(len(games_json[i]['tags']) > 0):
		game = games_json[i]
		print("//Inserting {}".format(game['name'] ) )
		tags_size = len(game['tags']) - 1
		tags_quotes = ['"{}"'.format(x) for x in list(game['tags'].keys())]
		tags_list_as_string = ",".join(tags_quotes)
		tags_string = "{" + tags_list_as_string + "}"
		array_name = "_".join(game['name'].split())
		print("string {}_tags[{}] = {};".format( array_name, tags_size, tags_string) )
		print( 'g.insert_game("{}", "{}", "{}", {}_tags, {});'.format(game['name'], game['developer'], game['publisher'], array_name, tags_size) )
		#print(games_json[i].keys())


		    #string waif_tag[2] = {"Nudity", "Anime"};
		    #Game *waifu = g.insert_game( "Waifu Souls II", "Polygon Enix", "Balbe", waif_tag, 2 );
