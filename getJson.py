import urllib.request, json

url = "http://steamspy.com/api.php?request=all"
user_agent = 'Mozilla/5.0 (Windows; U; Windows NT 5.1; en-US; rv:1.9.0.7) Gecko/2009021910 Firefox/3.0.7'
headers={'User-Agent':user_agent,}

request=urllib.request.Request(url,None,headers)
response = urllib.request.urlopen(request)
data = response.read()
games_json = json.loads(data)
games = games_json.keys()
for i in games:
	if(len(games_json[i]['tags']) > 0):
		print("{} -- {}".format(games_json[i]['name'], list(games_json[i]['tags'].keys())) )
