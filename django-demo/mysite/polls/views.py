from django.http import HttpResponse

def index(request):
    return  HttpResponse('hello this is a test response')